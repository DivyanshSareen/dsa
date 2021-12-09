#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    int sq = sqrt(n);
    for (int i = 2; i < sq; i++)
    {
        if (i % n == 0)
            return false;
    }
    return true;
}

void prime_count(int n)
{
    vector<int> v(n + 1, 1);
    v[0] = 0;
    v[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime(i))
        {
            for (int j = 2; i * j <= n; j++)
            {
                v[i * j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (v[i] == 1)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    prime_count(n);
    return 0;
}