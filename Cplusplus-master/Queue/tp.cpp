#include<iostream>
using namespace std;
int main()
{
int flag,a1[10],a2[10];
for(int i=0;i<10;i++)
{
	a1[i]=1000;
	a2[i]=1000;
}
flag=0;
for(int i=0;i<10;i++)
{
if(a1[i]==1000&&a2[i]==1000)
{
flag=flag+1;
}
}
cout<<flag<<endl;
return 0;
}
