#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1, 0, 1};
    int n = 8;
    int p0 = 0, p1 = n - 1;
    while (p0 < p1)
    {
        if (arr[p0] == 1)
        {
            swap(arr[p0], arr[p1]);
            p1--;
        }
        else
            p0++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}