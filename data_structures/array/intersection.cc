#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, m = 7;
    int a[n] = {1, 2, 4, 6, 7};
    int b[m] = {1, 3, 5, 6, 7, 8, 9};
    int i = 0, j = 0;
    vector<int> u;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            u.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            while (a[i] < b[j])
                i++;
        }
        else if (a[i] > b[j])
        {
            while (a[i] > b[j])
                j++;
        }
    }
    for (auto x : u)
    {
        cout << x << " ";
    }
    return 0;
}