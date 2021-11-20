#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1, l2;
    set<int> s;
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(7);
    l1.push_back(6);
    l1.push_back(0);
    l2.push_back(90);
    l2.push_back(21);
    l2.push_back(6);
    l2.push_back(0);
    for (auto x : l1)
    {
        s.insert(x);
    }
    for (auto x : l2)
    {
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }

    return 0;
}