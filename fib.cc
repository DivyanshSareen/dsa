#include <bits/stdc++.h>
using namespace std;

int helper(int n, int memo[])
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
    return memo[n];
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int memo[n + 2];
    memset(memo, -1, sizeof(memo));
    return helper(n, memo);
}

int main(void)
{
    cout << fib(2) << " " << fib(6) << " " << fib(12) << " " << fib(40);
    return 0;
}