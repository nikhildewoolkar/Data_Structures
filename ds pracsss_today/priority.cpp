#include<iostream>
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
class nick
{
public:
int a[10],b[10],s1[10],s2[10],size,rear,front,ele1,ele2,choice;
public:
void get()
{
for(int i=0;i<size;i++)
{   
    cout<<"enter number..  ";
	cin>>a[i];
	cout<<"enter priority.... ";
	cin>>b[i];
}
for(int i=0;i<size;i++)
{   
    cout<<"number is :- "<<a[i];
	cout<<"priority :- "<<b[i];
	cout<<endl;
}

sort(a, a+size, greater<int>());
sort(b, b+size, greater<int>());
for(int i=0;i<size;i++)
{   
    cout<<"number is :- "<<a[i];
	cout<<"priority :- "<<b[i];
	cout<<endl;
}
}
void enqueue()
{
get();
for(int i=0;i<size;i++)
{
cout<<"enqueue operation is selected\n";
if(rear==size-1)
{
cout<<"queue exausted........\n";
}
else
{
++rear;
s1[rear]=a[i];
s2[rear]=b[i];
cout<<s1[rear]<<" : "<<s2[rear]<<endl;
}
}
}
void dequeue()
{
cout<<"you have selected dequeue operation\n";
for(int i=0;i<size;i++)
{
if(front>=rear+1)
{
cout<<"no element present in the stack\n";
}
else
{
ele1=s1[front];
ele2=s2[front];
front=front+1;
cout<<"you have removed "<<ele1<<" : "<<ele2<<" front the queue..."<<endl;
}
}
}
void mytech()
{
front=0;
rear=-1;
cout<<"enter the size of the queue:-\n";
cin>>size;
a[size],b[size],s1[size],s2[size];
do
{
cout<<"enter the option you want to select:-(1-enqueue 2-dequeue 3-display 4-exit):-\n";
cin>>choice;
switch(choice)
{
case 1:
enqueue();
break;

case 2:
dequeue();
break;


case 3:
break;

default:
cout<<"invalid choice ## enter right choice........\n";
}
}
while(choice!=3);
}
};
int main()
{
	nick o;
	o.mytech();
	return 0;
}

