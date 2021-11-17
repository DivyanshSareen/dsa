#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int r, int key)
{
    if (l <= r)
    {
        int mid = l + ((r - l) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            return binary(arr, l, mid - 1, key);
        }

        return binary(arr, mid + 1, r, key);
    }
    return -1;
}

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = 0;
    int r = sizeof(v) / sizeof(v[0]);
    cout << r;
    cout << "Enter key: ";
    int key;
    cin >> key;
    cout << binary(v, l, r, key);

    return 0;
}
