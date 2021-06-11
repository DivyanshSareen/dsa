#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}


int partition(std::vector<int>& v, int l, int r)
{
  int i = l-1, j = l, pivot = v[r];
  for(int j = l; j < r; j++)
  {
    if(v[j] < pivot)
    {
      i++;
      swap(v[i], v[j]);
    }
  }
  swap(v[i+1], v[r]);
  return (i+1);
}

void quick(std::vector<int>& v, int l, int r)
{
  if(l < r)
  {
    int p = partition(v, l, r);
    quick(v, l, p-1);
    quick(v, p+1, r);
  }
}


int main()
{
  std::vector<int> v = {4,2,7,3,9,5,6};
  for(int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
quick(v, 0, v.size());
for(int i = 0; i < v.size(); i++)
{
  cout<<v[i]<<" ";
}
  return 0;
}
