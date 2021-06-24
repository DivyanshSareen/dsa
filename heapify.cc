#include <bits/stdc++.h>
using namespace std;

void print(std::vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

// perlocate up
void heapify(std::vector<int> &v, int n, int i)
{
  int c1 = 2 * i + 1;
  int c2 = 2 * i + 2;
  int max = i;
  if (c1 < n && v[c1] > v[max])
  {
    max = c1;
  }
  if (c2 < n && v[c2] > v[max])
  {
    max = c2;
  }
  if (max != i)
  {
    swap(v[i], v[max]);
    heapify(v, n, max);
  }
}

void make_heap(std::vector<int> &v, int n)
{
  for (int i = n / 2; i >= 0; i--)
  {
    heapify(v, n, i);
  }
}

int extract_max(std::vector<int> &v, int n)
{
  int val = v[0];
  swap(v[0], v[n - 1]);
  make_heap(v, n - 1);
  v.pop_back();
  return val;
}

void perlocate_up(std::vector<int> &v, int n, int i)
{
  int p = (i - 1) / 2;
  if (p > 0 && v[p] < v[i])
  {
    swap(v[p], v[i]);
    perlocate_up(v, n, p);
  }
}

void insert(std::vector<int> &v, int ele)
{
  v[v.size() + 1] = ele;
  perlocate_up(v, v.size(), v.size() - 1);
}

int main()
{
  int n;
  std::vector<int> v = {3, 9, 4, 5, 1, 2};
  make_heap(v, v.size());
  print(v);
  cout << endl;
  cout << extract_max(v, n) << endl;
  print(v);
  insert(v, 12);
  print(v);
  return 0;
}
