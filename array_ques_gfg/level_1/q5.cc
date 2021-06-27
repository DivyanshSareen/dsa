#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = a[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[mid + j + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
    }
}

void sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        sort(a, l, mid);
        sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main(void)
{
    int k, n = 6;
    int a[n] = {4, 2, 7, 3, 1, 9};
    sort(a, 0, n);
    cin >> k;
    cout << a[k - 1] << a[n - k];
    return 0;
}