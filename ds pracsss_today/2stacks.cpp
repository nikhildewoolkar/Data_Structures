#include<iostream>
using namespace std;
class nick
{
public:
int top1,top2,ele,choice,num,size,s[10];
public:
void pushf()
{
cout<<" front push operation is selected\n";
if (top1<top2-1)
{
cout<<"enter the element you want to push into the stack\n";
cin>>num;
top1=top1+1;
s[top1]=num;
cout<<"the number is inserted into the stack:-\n";
}
else
{
cout<<"stack exausted........\n"; 
}
}


void pushr()
{
cout<<" front push operation is selected\n";
if (top1<top2-1)
{
cout<<"enter the element you want to push into the stack\n";
cin>>num;
top2=top2-1;
s[top2]=num;
cout<<"the number is inserted into the stack:-\n";
}
else
{
cout<<"stack exausted........\n"; 
}
}


void popf()
{
cout<<"you have selected pop operation\n";
if(top1>=0)
{
ele=s[top1];
top1=top1-1;
cout<<"u have popped "<<ele<<" from the stack";
}
else
{
cout<<"no element present in the stack\n";	
}
}


void popr()
{
cout<<"you have selected pop operation\n";
if(top2<size)
{
ele=s[top2];
top2=top2+1;
cout<<"u have popped "<<ele<<" from the stack";
}
else
{
cout<<"no element present in the stack\n";	
}	
} 


void dis()
{
cout<<"display option is selected\n";
if(top1==-1 && top2==size)
{
cout<<"no element is present in array\n";
}
else
{
for(int i=top1;i>-1;i--)
{
cout<<i<<" : "<<s[i]<<"\n";
}
for(int i=top2;i<=size;i++)
{
cout<<i<<" : "<<s[i]<<"\n";
}
}
}


void get()
{
cout<<"enter the size of the stack:-\n";
cin>>size;
top1=-1;
top2=size;
int s[size];
do
{
cout<<"enter the option you want to select:-(1-front push 2-rear push 3-front pop 4- rear pop 5-display 6-exit):-\n";
cin>>choice;

switch(choice)
{
case 1:
pushf();
break;

case 2:
pushr();
break;


case 3:
popf();
break;

case 4:
popr();
break;

case 5:
dis();
break;

case 6:
break;

default:
cout<<"invalid choice ## enter right choice........\n";
}
}
while(choice!=6);
}
};

int main()
{
nick o;
o.get();
}
