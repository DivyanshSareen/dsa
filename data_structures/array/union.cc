#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, m = 7;
    int a[n] = {1, 2, 4, 6, 7};
    int b[m] = {1, 3, 5, 6, 7, 8, 9};
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            while (a[i] < b[j])
            {
                v.push_back(a[i]);
                i++;
            }
        }
        else if (a[i] > b[j])
        {
            while (a[i] > b[j])
            {
                v.push_back(b[j]);
                j++;
            }
        }
    }
    while (i < n)
    {
        v.push_back(a[i++]);
    }
    while (j < m)
    {
        v.push_back(b[j++]);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}