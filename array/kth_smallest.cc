#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int j = l;
    int pivot = arr[r];
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

int quicksort(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int p = partition(arr, l, r);

        if (p - l == k - 1)
        {
            return arr[p];
        }
        else if (p - l > k - 1)
        {
            quicksort(arr, l, p - 1, k);
        }
        else
        {
            quicksort(arr, p + 1, r, k - p + l - 1);
        }
    }
    else
        return -1;
}

int main(void)
{
    int arr[] = {7, 25, 6, 16, 17};
    cout << quicksort(arr, 0, 4, 3);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}