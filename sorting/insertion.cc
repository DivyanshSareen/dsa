#include<bits/stdc++.h>
using namespace std;

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
    int temp = v[i];
    int j = i-1;
    while(j >= 0 && temp < v[j])
    {
      v[j+1] = v[j];
      j = j-1;
    }
    v[j+1] = temp;
  }
  print(v);
return 0;
}
