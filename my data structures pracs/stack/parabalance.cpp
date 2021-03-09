#include<iostream>
#include<string>
using namespace std;
class nick
{
public:
int size,top,i;
string str;
char *a;
public:
void push(char c)
{
if(top==size-1);
else
{
a[++top]=c;
}
}
void pop()
{
if(top==-1);
else
{
top--;
}
}
void display()
{
if(top==-1)
{
cout << "empty array";
}
else
{
cout << "elements in array: \n";
for(int i=top;i>=0;i--)
{
cout<<a[i]<<"\n";
}
}
}
void mytech()
{
top=-1;
cout << "Enter a string: ";
cin >> str;
int b=str.length();
a=new char[b]; 
for(i=0;i<b; i++)
{
if(top==-1 && str.at(i)==')')
{
cout << "Invalid Input.";
break;
}
else
{
if(str.at(i)=='(')
{
push(str.at(i));
}
else if(str.at(i)==')')
{
pop();
}
}
}
if(i==b)
{
if (top==-1)
{
cout << "equal Paranthesis.\n";
}
else
{
cout << "Paranthesis not equal.\n";
}
}
}
};
int main()
{
nick o;
o.mytech();
}
