#include<iostream>
using namespace std;
class nick
{
char *s;
string input,output;
int top;
public:
mytech()
{
top = -1;
cout<<"Enter equation:-";
cin >>input;
input+=')';
s=new char[input.length()];
s[++top] = '(';
output="";
for(int i=0;i<input.length();i++)
{
if(input.at(i)=='(')
{
push(input.at(i));
}
else if(process(input.at(i))==true)
{
if(s[top]!='(' && (prior(input.at(i))<prior(s[top])))
{
output+=pop();
push(input.at(i));
}
else
{
push(input.at(i));
}
}
else if(input.at(i)==')')
{
while(s[top]!='(')
{
output += pop();
}
pop();
}        
else
{
output+=input.at(i);
}
}
cout << output << endl;
}
bool process(char c)
{
if ((c=='+')||(c=='-')||(c=='*')||(c=='/')||(c=='^'))
{
return true;
}
else
{
return false;
}
}
int prior(char op)
{
if(op=='^')
{
return 4;
}
else if(op=='/')
{
return 3;
}
else if(op=='*')
{
return 2;
}
else if(op=='+')
{
return 1;
}
else if(op=='-')
{
return 0;
}
}
void push(char c)
{
s[++top] = c;
}
char pop()
{
return s[top--];
}
};
int main()
{
nick o;
o.mytech();
}
