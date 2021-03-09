#include<iostream>
using namespace std;
class nick
{
public:
int *a1,*a2,*q,s,pos1=0,pos2=0,small1,small2,i,front,rear,flag,v;	

public:
int loop()
{ 
flag=0;
for(i=0;i<s;i++)
{
if(a1[i]==1000&&a2[i]==1000)
{
flag=flag+1;
}
}
if(flag==s-1)
{
v=2;
}
else
{
v=0;
}
}		
void get()
{
front=-1;
rear=-1;
cout<<"johnson algorithm\n";
cout<<"enter the number of processes you wannna take :-\n";
cin>>s;
a1=new int[s];
a2=new int[s];
q=new int[s];
for(int i=0;i<s;i++)
{
cout<<"enter the process time for first system:-\n";
cin>>a1[i]; 
cout<<"enter the process time for second system:-\n";
cin>>a2[i]; 
}
cout<<"processes "<<"system 1  "<<"system 2 \n";
for(int i=0;i<s;i++)
{
cout<<"p"<<i<<"\t    "<<a1[i]<<" \t     "<<a2[i]<<endl;
}
}
void mytech()
{
do
{
flag=0;

//smallest in first array
small1=a1[0];
for(i=1;i<s; i++)
{
if(small1>a1[i])
{
small1=a1[i];
pos1=i;
}
}
cout<<small1<<" "<<pos1<<endl;

//smallest in second array
small2=a2[0];
for(i=1;i<s; i++)
{
if(small2>a2[i])
{
small2=a2[i];
pos2=i;
}
}
cout<<small2<<" "<<pos2<<endl;
if(small1>small2)
{
	cout<<"small 1 is greater\n";
}
else if(small1<small2)
{
	cout<<"small 2 is greater\n";
}
else
{
	cout<<"same\n";
}
if(small1<small2)
{
re(pos1);
a1[pos1]=1000;
a2[pos1]=1000;
}
else if(small1>small2)
{
fe(pos2);
a1[pos2]=1000;
a2[pos2]=1000;
}
else
{
re(pos1);
a1[pos1]=1000;
a2[pos1]=1000;
fe(pos2);
a1[pos2]=1000;
a2[pos2]=1000;
}
for(i=0;i<s;i++)
{
cout<<"p"<<i<<"     "<<q[i]<<endl;
}
for(i=0;i<s;i++)
{
cout<<i<<"     "<<a1[i]<<"  "<<a2[i]<<endl;
}
loop();
}
while(v!=2);
cout<<i-1<<"     "<<q[0]<<"   "<<q[s-1]<<endl;
}
void fe(int pos)
{
if(front == -1){
front = rear = 0;
q[rear] = pos;
}
else
{
if(front==0)
{
front = s;
}
if((front-1)%s==rear)
{
cout << "Overflow.\n";
}
else
{
--front %= s;
q[front] = pos;
}
}
}
void re(int pos)
{
if(front == -1)
{
front = rear = 0;
q[rear] = pos;
}
else if((rear+1)%s==front)
{
cout << "Overflow.\n";
}
else
{
++rear %= s;
q[rear] = pos;
}
}
};
int main()
{
nick o;
o.get();
o.mytech();
}
