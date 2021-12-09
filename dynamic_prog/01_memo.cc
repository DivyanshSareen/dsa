#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

int knapSack(int W, int wt[], int val[], int n)
{
    if (W == 0 || n == 0)
    {
        return 0;
    }
    else if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    else if (wt[n - 1] <= W)
    {
        return dp[n][W] = max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    }
    else
        return dp[n][W] = knapSack(W, wt, val, n - 1);
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    memset(dp, -1, sizeof(dp));
    cout << knapSack(W, wt, val, n);
    return 0;
}