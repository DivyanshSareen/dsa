#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int j = l;
    int pivot = arr[r];
    for (int j = l; j < r - 1; j++)
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

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partition(arr, l, r);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    }
}

int main(void)
{
    int arr[] = {3, 9, 4, 1, 11, 5};
    int n = 6;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}