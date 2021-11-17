#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int r)
{
    if (l <= r)
    {
        int mid = l + ((r - l) / 2);
        if (arr[mid] == 1)
        {
            if (arr[mid - 1] == 0)
            {
                return mid - 1;
            }
            else
            {
                binary(arr, l, mid - 1);
            }
        }
        else if (arr[mid] == 0)
        {
            if (arr[mid + 1] == 1)
            {
                return mid;
            }
            else
            {
                binary(arr, mid + 1, r);
            }
        }
    }
    else
        return -1;
}

int transition(int arr[], int n)
{
    int p = binary(arr, 0, n);
    return p;
}

int main(void)
{
    int arr[] = {0, 0, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << transition(arr, n);
    return 0;
}