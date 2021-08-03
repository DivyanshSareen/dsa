#include <bits/stdc++.h>
using namespace std;
#define BITS 32

void get_binary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1ll << i)) != 0)
        {
            cout << 1;
        }
        else
            cout << 0;
    }
}

int check_parity(int num)
{
    //if odd parity, n & 1 will be 1
    //if even parity, n & 1 will 0
    //last bit for odd is 1 and for even is 0
    return num & 1;
}

int main(void)
{
    int num;
    cin >> num;
    get_binary(num);
    return 0;
}