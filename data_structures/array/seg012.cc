#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 2, 0, 1, 0, 1, 2, 1};
    int n = 7;
    int p0 = 0, p1 = 0, p2 = n - 1;
    while (p1 <= p2)
    {
        if (arr[p1] == 0)
        {
            swap(arr[p0++], arr[p1++]);
        }
        else if (arr[p1] == 1)
        {
            p1++;
        }
        else
        {
            swap(arr[p1], arr[p2--]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}