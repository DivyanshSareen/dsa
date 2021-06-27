#include <iostream>
#include <numeric>
using namespace std;

int get_max(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (m < a[i])
            m = a[i];
    }
    return m;
}

int get_min(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (m > a[i])
            m = a[i];
    }
    return m;
}

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int range = get_max(a, n) - get_min(a, n);
    float coeff = (float)range / (get_min(a, n) + get_max(a, n));
    cout << range << " " << coeff;
    return 0;
}