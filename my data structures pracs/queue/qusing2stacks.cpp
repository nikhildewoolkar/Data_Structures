#include<iostream>
using namespace std;
class nick
{
public:
int front1,rear1,front2,rear2,ele,size,stack1[30],stack2[30],number,res[20];
public:

void push(int stack[],int num,int* front,int* rear)
{
// cout<<"enqueue operation is selected\n";
if(*rear==size-1)
{
// cout<<"queue exausted........\n";
}
else
{
++*rear;
stack[*rear]=num;
// cout<<"the number is inserted into the queue\n";
}
}

int pop(int stack[],int* front,int* rear)
{
// cout<<"you have selected dequeue operation\n";
// cout<<*front<<*rear<<" ";
if(*front>*rear)
{
// cout<<"no element present in the stack\n";
return -1;
}
else
{
ele=stack[*rear];
*rear=*rear-1;
// cout<<"you have removed "<<ele<<" front the queue....";
return ele;
}
}

void dis(int stack[],int* front,int* rear)
{
// cout<<"display option is selected\n";

// if(front>rear)
// {
// cout<<"no element is present in array\n";
// }
// else
// {
for(int i=*rear;i>=*front;i--)
{
cout<<i<<" : "<<stack[i]<<"\n";
}
// }
}



void acceptip()
{
front1=0;
rear1=-1;
front2=0;
rear2=-1;
cout<<"Enter number of elements\n";
cin>>size;

// cout<<"Enter arrival time and burst time for "<<size<<" processes:\n";
  
    for(int j=0;j<size;j++){
        cout<<"Enter the element "<<j+1<<" :\n";
        cin>>number;
        push(stack1,number,&front1,&rear1);
    }

cout<<"Elements in stack 1 are:\n";
// cout<<front1<<rear1<<"are";
dis(stack1,&front1,&rear1);
    schedule();

}


void schedule(){
    int d=pop(stack1,&front1,&rear1);
    
    while(d!=-1){
        push(stack2,d,&front2,&rear2);
        d=pop(stack1,&front1,&rear1);
        // cout<<d<<" ";
    }
    cout<<"Elements in stack 2 are:\n";
    dis(stack2,&front2,&rear2);


    int e=pop(stack2,&front2,&rear2);
    int x,f=0;
    while(e!=-1){
        f+=1;
                cout<<"The element "<<f<<" you entered was "<<e<<"\n";

        e=pop(stack2,&front2,&rear2);
    }


}

};
int main()
{
nick o;
o.acceptip();
}