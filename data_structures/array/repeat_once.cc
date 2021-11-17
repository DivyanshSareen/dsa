#include <bits/stdc++.h>
using namespace std;

int repeat(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    else
    {
        int res = arr[0];
        for (int i = 0; i < n; i++)
        {
            res = res ^ arr[i];
        }
        return res;
    }
}

int helper(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    map<int, int> m;
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] == 0)
        {
            sum1 += arr[i];
            m[arr[i]]++;
        }
        sum2 += arr[i];
    }
    return 2 * sum1 - sum2;
}

int main()
{
    int arr[] = {0, 0, 1, 1, 5, 5, 6, 12, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << helper(arr, n);
    return 0;
}