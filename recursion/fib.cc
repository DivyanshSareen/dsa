#include<bits/stdc++.h>
using namespace std;

int fib_iter(int n)
{
  int a = 0, b = 1, c;
  if(n == 0) return a;
  if(n == 1) return b;

  while(n - 2 >= 0)
  {
    c = a+b;
    a = b;
    b = c;
    n --;
  }
  return b;
}

int fib_rec(int n)
{
  if(n <= 1) return n;
  return fib_rec(n-1) + fib_rec(n-2);
}

int main()
{
  int n;
  cout<<"Enter value of n ";
  cin>>n;
  cout<<"Iterative "<<fib_iter(n)<<endl;
  cout<<"Rcursive "<<fib_rec(n)<<endl;
  return 0;
}
