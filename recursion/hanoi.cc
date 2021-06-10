#include<bits/stdc++.h>
using namespace std;

void hanoi(int n, char s, char a, char d)
{
if(n == 0) return;
hanoi(n-1, s, d, a);
cout<<"Move "<<n<<" from "<< s <<" to "<< d <<endl;
hanoi(n-1, a, s, d);
}

int main()
{
  int n;
  cout<<"Enter no. of rings";
  cin>>n;

  char source = 's';
  char auxiliary = 'a';
  char destination = 'd';

  hanoi(n, source, auxiliary, destination);
}
