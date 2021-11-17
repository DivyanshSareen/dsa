#include <bits/stdc++.h>
using namespace std;

int binary(std::vector<int> v, int l, int r, int key)
{
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (v[mid] == key)
    {
      return mid;
    }
    else if (v[mid] > key)
    {
      return binary(v, l, mid - 1, key);
    }
    else
    {
      return binary(v, mid + 1, r, key);
    }
  }
  return -1;
}

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int l = 0, r = v.size();
  cout << "Enter key: ";
  int key;
  cin >> key;
  cout << binary(v, l, r, key);

  return 0;
}
