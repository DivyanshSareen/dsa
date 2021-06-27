#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//insertion sort

void sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int k = a[i];
        while (a[j] > k && j > 0)
        {
            j--;
        }
        swap(&a[i], &a[j + 1]);
    }
}

int main(void)
{
    int arr[] = {1, 6, 2, 3, 8};
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}