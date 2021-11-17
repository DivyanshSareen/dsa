#include<bits/stdc++.h>
using namespace std;

void print(std::vector<int> v)
{
  for(int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}

void merge(std::vector<int>& v, int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;

  int left[n1], right[n2];

  for(int i = 0; i < n1; i++)
  {
    left[i] = v[l + i];
  }
  for(int i = 0; i < n2; i++)
  {
    right[i] = v[m + i + 1];
  }

  int i = 0, j = 0, k = l;
  while(i < n2 && j < n2 )
  {
    if(left[i] < right[j])
    {
      v[k++] = left[i++];
    }
    else{
      v[k++] = right[j++];
    }
  }
  while(i < n1)
  {
    v[k++] = left[i++];
  }
  while(j < n2)
  {
    v[k++] = right[j++];
  }
}

void merge_sort(std::vector<int>& v, int l, int r)
{
  if(l < r)
  {
    int m = (l+r)/2;
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
  }
}

int main()
{
  std::vector<int> v = {5, 3, 6, 8, 4, 2};
  print(v);
  merge_sort(v, 0, v.size());
  cout<<endl;
  print(v);
  return 0;
}
