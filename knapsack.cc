#include <bits/stdc++.h>
using namespace std;

int knap(int v[], int w[], int n, int W)
{
    if (W == 0 || n == 0)
        return 0;
    if (w[n - 1] <= W)
    {
        return max(v[n - 1] + knap(v, w, n - 1, W - v[n - 1]), knap(v, w, n - 1, W));
    }
    else
        return knap(v, w, n - 1, W);
}

int main(void)
{
    int N = 3;
    int W = 4;
    int values[] = {1, 2, 3};
    int weight[] = {4, 5, 1};
    cout << knap(values, weight, N, W);
    return 0;
}