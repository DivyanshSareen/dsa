#include <iostream>
using namespace std;

bool check(int a[], int l, int u, int key)
{
    for (int i = l; i < u; i++)
    {
        if (a[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int n, k, x, f = false, c = 0;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k >> x;
    for (int i = 0; i < n; i = i + x)
    {
        if (i + x >= n)
        {
            f = check(a, i, n, k);
        }
        else
        {
            f = check(a, i, i + x, k);
        }
        if (f == false)
            break;
    }
    if (f == false)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}