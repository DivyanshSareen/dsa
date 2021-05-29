#include<bits/stdc++.h>
using namespace std;
void swap(int *e1, int *e2)
{
  int temp = *e1;
  *e1 = *e2;
  *e2 = temp;
}

void print(std::vector<int> v)
{
  for(int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}

int main(){
  std::vector<int> v;
  v = {2,5,3,7,12,0,9};

  for(int i = 0; i < v.size(); i++)
  {
    int m_index = i;
    for(int j = i+1; j < v.size(); j++)
    {
        if(v[i] > v[j])
        {
          m_index = j;
        }
    }
    swap(v[i],v[m_index]);
  }
  print(v);
return 0;
}
