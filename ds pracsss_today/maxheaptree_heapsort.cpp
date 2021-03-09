#include<iostream>
#include<stdlib.h>
using namespace std;
class nick
{
public:
int s, *a;
public:
void swap(int n1,int n2)
{
int t=a[n1];
a[n1]=a[n2];
a[n2]=t;
}
void set_array(int *a, int s)
{
this->a=a;
this->s=s;
}
void Heapsort()
{
domaxheap();
int t=s;
for(int i=t-1;i>=0;i--)
{
swap(0,i);
s--;
heapifyMax(0);
}
s=t;
display();
} 
void heapifyMax(int i)
{
int big=i;
int l=(2 * i) + 1;
int r=(2 * i) + 2;
if (l<s && a[l]>a[big])
{
big = l;
}
if (r<s && a[r]>a[big])
{
big=r;
}
if(big!=i)
{
swap(big,i);
heapifyMax(big);
}
}
void domaxheap()
{
int startIdx=(s/2)-1;
for (int i=startIdx;i>=0;i--)
{
heapifyMax(i);
}
display();
}

void display()
{
for (int i = 0; i < s; i++)
{
cout<<a[i] << " ";
}
cout<<"\n";
}
void get()
{
int s,ch,num,*a;
cout<<"Enter s of array ";
cin>>s;
a=new int[s];
cout<<"Enter "<<s<<" numbers ";
for(int i=0;i<s;i++)
{
cin >> a[i];
}
this->a=a;
this->s=s;
cout << "1. Build max heap\n 2. Apply heap sort \n 3. Display \n 4. Exit! \n";
do
{
cout<< "Enter choice ";
cin>>ch;
switch(ch)
{
case 1:
domaxheap();
break;

case 2:
Heapsort();
break;

case 3:
display();
break;

case 4:
break;

default:
cout << "Invalid choice";
break;
}
}while (ch!=4);   
}
};
int main()
{
nick obj;
obj.get();
return 0;
}
