#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    cout << fib(2) << " " << fib(6) << " " << fib(12);
    return 0;
}