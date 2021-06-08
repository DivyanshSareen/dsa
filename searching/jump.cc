#include<bits/stdc++.h>
using namespace std;

int jump(std::vector<int> v, int key)
{
 int start = 0;
 int end = sqrt(v.size());
 int step = end;
 while(end < v.size() && key >= v[end])
 {
   start = end;
   end = end + step;
   if(v[end] >= key)
   {
     if(end > v.size()-1){
      end = v.size();
     }
   }
 }
 for(int i = start; i <= end; i++)
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
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  cout<<v.size();
  int key;
  cout<<"Enter key: ";
  cin>>key;
  cout<<jump(v,key);
  return 0;
}
