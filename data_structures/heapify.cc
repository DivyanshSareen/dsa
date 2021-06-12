#include<bits/stdc++.h>
using namespace std;

void print(std::vector<int> v)
{
  for(int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

void heapify(std::vector<int>& v, int n, int i)
{
  int c1 = 2*i + 1;
  int c2 = 2*i + 2;
  int max = i;
  if(c1 < n && v[c1] > v[max])
  {
    max = c1;
  }
  if(c2 < n && v[c2] > v[max])
  {
    max = c2;
  }
  if(max != i)
  {
    swap(v[i], v[max]);
    heapify(v, n, max);
  }
}

void make_heap(std::vector<int>& v, int n)
{
  for(int i = n/2; i >= 0; i--)
  {
    heapify(v, n, i);
  }
}

int extract_max(std::vector<int>& v, int n)
{
  int val = v[0];
  swap(v[0], v[n-1]);
  make_heap(v, n-1);
  v.pop_back();
  return val;
}

int main()
{
  int n;
  std::vector<int> v = {3, 9, 4, 5, 1, 2};
  n = v.size();
  make_heap(v, n);
  print(v);
  cout<<endl;
  cout<< extract_max(v, n)<<endl;
  print(v);
  return 0;
}
