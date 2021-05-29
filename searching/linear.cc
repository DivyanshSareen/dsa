#include<bits/stdc++.h>
using namespace std;

int linear(std::vector<int> v, int key){
  for(int i = 0; i < v.size(); i++)
  {
    if(v[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
std::vector<int> v = {5,2,8,5,2,9,55,3,12};
int key = 55;
cout<<linear(v,key);
return 0;
}
