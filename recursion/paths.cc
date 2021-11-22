#include <bits/stdc++.h>
using namespace std;

int path(int m, int n)
{
    if (m == 1 && n == 1)
    {
        return 1;
    }
    if (m == 0 || n == 0)
    {
        return 0;
    }
    return path(m - 1, n) + path(m, n - 1);
}

int main()
{
    int m = 3, n = 3;
    cout << path(3, 3);
    return 0;
}