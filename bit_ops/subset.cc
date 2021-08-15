#include <bits/stdc++.h>
using namespace std;

void helper(int arr[], int n, int subset[], int i)
{
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (subset[i] != -1)
                cout << subset[i];
        }
        cout << endl;
        return;
    }
    else
    {
        subset[i] = -1;
        helper(arr, n, subset, i + 1);
        subset[i] = arr[i];
        helper(arr, n, subset, i + 1);
    }
}

void subset(int v[], int n)
{
    int subset[n] = {0};
    helper(v, n, subset, 0);
}

void subitr(int a[], int n)
{
    int tot_sets = pow(2, n);
    int i = 0;
    while (i < tot_sets)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & 1ll << j)
            {
                cout << a[j];
            }
        }
        cout << endl;
        i++;
    }
}

int main(void)
{
    int v[] = {1, 2};
    subset(v, 2);
    subitr(v, 2);
    return 0;
}