#include<iostream>
using namespace std;
class nick
{
public:
int d=0,front,rear,size,queue[30],num, readyarr[15], ele,ipinfo[5][7],s[20],timeslice;
public:

void enqueue(int num)
{
++rear;
queue[rear]=num;
}

int dequeue()
{
if(front>rear)
{
return -1;
}
else
{
ele=queue[front];
front=front+1;
readyarr[d]=ele;  
d+=1;
return ele;
}
}
void acceptip()
{
front=0;
rear=-1;
cout<<"Enter number of processes\n";
cin>>size;
cout<<"Enter time slice\n";
cin>>timeslice;
for(int i=0;i<size;i++)
{    
cout<<"Enter arrival time and burst time for "<<i<<" processes:\n";
    for(int j=1;j<3;j++){
          ipinfo[i][0]=i;
          cin>>ipinfo[i][j];
          ipinfo[i][3]=ipinfo[i][2]; 
          ipinfo[i][4]=-1; 
          ipinfo[i][6]=-1; 
    }
}
cout<<"Pno. | AT  |  BT  |  RT \n";
for(int i=0;i<size;i++)
{
    for(int j=0;j<4;j++){
        cout<<ipinfo[i][j]<<"   |   ";
    }
    cout<<"\n";
}
init();
}

void init(){
        for(int i=0;i<size;i++){
        if(ipinfo[i][1]==0){
            enqueue(ipinfo[i][0]);
    
        }
    }
    
    schedule();
}

void schedule()
{
    int z=0;
    int i=dequeue();
    while(i!=-1){

        if(ipinfo[i][4]==-1){
            ipinfo[i][4]=z;
        }
        if(ipinfo[i][3]<timeslice){  
            for(int j=0;j<ipinfo[i][3];j++){
                s[z]=ipinfo[i][0];
                
                
                z+=1;   
            ipinfo[i][6]=z;  
            }        
            ipinfo[i][3]=0;  
        }
        else{
              for(int j=0;j<timeslice;j++){
                s[z]=ipinfo[i][0];
                z+=1;     
       }
                ipinfo[i][3]=ipinfo[i][3]-timeslice;
                if(ipinfo[i][3]==0){
                    ipinfo[i][6]=z;
					                }
                else{
                    for(int o=0;o<size;o++){
                        if(ipinfo[o][1]<=z && ipinfo[o][1]>0 && ipinfo[o][3]!=0 && o!=i){ 
                            enqueue(ipinfo[o][0]);
                            
                        }
                    }
                        if(ipinfo[i][3]!=0)   
                           enqueue(ipinfo[i][0]);
                }
                   
        }
        i=dequeue(); 
    }
    cout<<"\nProcess queue is: ";
    for(int h=0;h<z;h++){
        cout<<s[h]<<" ";
    }
    cout<<"\n\n";
 cout<<"Pno. | AT  |   BT   |   RT  |  WT   |  TAT  |  CT  |\n";
for(int i=0;i<size;i++)
{
    ipinfo[i][5]=ipinfo[i][6]-ipinfo[i][1]; 
    ipinfo[i][4]=ipinfo[i][5]-ipinfo[i][2]; 
    for(int j=0;j<7;j++){
        cout<<ipinfo[i][j]<<"   |   ";
    }
    cout<<"\n";
}

int avgWT=0, avgTAT=0;
for(int i=0;i<size;i++){
    avgWT=ipinfo[i][4]+avgWT;
    avgTAT=ipinfo[i][5]+avgTAT;
}

cout<<"\nAverage Waiting Time is: "<<avgWT/float(size)<<"\n";
cout<<"\nAverage Turn Around Time is: "<<avgTAT/float(size)<<"\n";
cout<<"\nReady Array is: ";

for(int i=0;i<d;i++){
    cout<<readyarr[i]<<"  ";
}
 cout<<"\n\n";
}
};
int main()
{
nick o;
o.acceptip();
}
