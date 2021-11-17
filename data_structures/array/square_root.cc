#include <bits/stdc++.h>
using namespace std;

int binary(int l, int r)
{
    int res = -1;
    int n = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long long sqr = mid * mid;
        if (sqr == n)
        {
            return mid;
        }
        else if (sqr < n)
        {
            l = mid + 1;
            res = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}

int square_root(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int res = binary(0, n);
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << square_root(n);
    return 0;
}