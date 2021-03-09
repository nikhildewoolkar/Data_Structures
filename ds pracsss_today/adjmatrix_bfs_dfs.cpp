#include<iostream>
#define MAX 100
using namespace std;
class nick
{
public:
int s=0;
int a[MAX][MAX];
int bfs[MAX];
int t[MAX];
int front=0;
int rear=0;

public:
void adj()
{
cout<<"how many nodes should be there? : ";
cin>>s;
cout<<s<<" by "<<s<<" Matrix ";
cout<<"\nEnter 1 if edge exists and 0 if it doesn't"<<endl<<endl;
for(int i=0;i<s;++i)
{
for(int j=0;j<s;++j)
{
cout<<endl<<"connection between node"<< i << " and node " << j <<" : ";
cin>>a[i][j];
}
}
for(int i=0;i<s;i++)
{
for(int j=0;j<s;j++)
{
cout<<"\nFor edge between node "<< i << " and node " << j <<" : ";
cout<<a[i][j];
}
}
cout<<"\nThe adjacency matrix is :";
for (int i=0;i<s;i++)
{
cout<<endl;
for (int j=0;j<s;j++)
{
cout << a[i][j]<<"\t";
}
}
cout<<endl<<endl;
}
int visited(int node)
{
for (int i=0;i<s;i++)
{
if (node==bfs[i])
{
return 0;
}
}
for (int i=front;i<rear;i++)
{
if (node==t[i])
{
return 0;
}
}
return 1;
}

void bfsfun()
{
t[0] = 0;
int c = 0;
rear=1;
int v=0;
for (int i=0;i<s;i++)
{
for (int j=0;j<s;j++)
{
if(a[v][j]==1)
{
if(visited(j) == 1)
{
t[rear] = j;
rear++;
}
}
}
bfs[c] = t[front];
c++;
front++;
v=t[front];
for (int j = 0; j <s; j++)
{
cout <<t[j]<<"\t";
}
}
bfs_pass();
}
void bfs_pass()
{
cout << endl;
for (int j=0;j<s;j++)
{
cout <<bfs[j]<<"\t";
}
}
};


int main()
{
nick o;
o.adj();
o.bfsfun();
}

