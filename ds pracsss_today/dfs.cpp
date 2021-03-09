#include <iostream>
using namespace std;
class nick
{
public:
 int n, a[100][100], top = 0;
 char ch = 'A', c1, c2, stack[100], dfs[100];
 nick()
 {
 mytech();
 }
 void mytech()
 {
 cout <<"Enter size (no. of n) : ";
 cin >> n;
 for (int i = 0; i < n; i++)
 {
 dfs[i] = '0';
 for (int j = 0; j < n; j++)
 {
 c1 = ch + i;
 c2 = ch + j;
 cout << "Enter for " << c1 << " and " << c2 << " : ";
 cin >> a[i][j];
 }
 }
 dis();
 }
 void dis()
 {
 cout << " Adjacent Matrix : " << endl;
 cout << " ";
 for (int i = 0; i < n; i++)
 {
 c1 = ch + i;
 cout << c1 << " ";
 }
 cout << endl;
 for (int i = 0; i < n; i++)
 {
 c1 = ch + i;
 cout << c1 << " ";
 for (int j = 0; j < n; j++)
 {
 cout << a[i][j] << " ";
 }
 cout << endl;
 }
 Pass();
 }
 void Pass()
 {
 int c = 0, s = 0, count = 0;
 stack[0] = 'A';
 top = 0;
 display_stack();
 while (s < n)
 {
 dfs[count] = stack[top];
 count++;
 c = stack[top] - 65;
 top--;
 for (int i = 0; i < n; i++)
 {
 if (a[c][i] == 1)
 {
 if (check(i) == true)
 {
 c1 = 65 + i;
 top++;
 stack[top] = c1;
 }
 }
 }
display_stack();
 s++;
 }
 display_dfs();
 }
 bool check(int cha)
 {
 char c;
 c = 65 + cha;
 for (int i = 0; i < n; i++)
 {
 if (c == dfs[i])
 {
 return false;
 }
 }
 for (int i = 0; i <= top; i++)
 {
 if (c == stack[i])
 {
 return false;
 }
 }
 return true;
 }
 void display_dfs()
 {
 cout << endl << "DFS sequence : ";
 for (int i = 0; i < n; i++)
 cout << dfs[i] << " ";
 cout << endl;
 }
 void display_stack()
 {
 for (int i = 0; i <= top; i++)
 cout << stack[i] << " ";
 }
};
int main()
{
 nick a;
}
