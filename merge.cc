#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int l1[n1], l2[n2];

    for (int i = 0; i < n1; i++)
    {
        l1[i] = arr[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        l2[i] = arr[m + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (l1[i] >= l2[j])
        {
            arr[k++] = l2[j++];
        }
        else
        {
            arr[k++] = l1[i++];
        }
    }
    while (i < n1)
    {
        arr[k++] = l1[i++];
    }
    while (j < n2)
    {
        arr[k++] = l2[j++];
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {8, 3, 6, 3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}