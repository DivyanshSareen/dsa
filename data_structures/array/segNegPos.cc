#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    int a[n] = {1, 5, -5, -4, 3, -2, 1, 9, -3};
    int l = 0, h = n - 1;
    while (l < h)
    {
        if (a[l] >= 0)
        {
            swap(a[l], a[h--]);
        }
        else
            l++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}