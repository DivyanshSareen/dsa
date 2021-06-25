#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n)
{
    int lo = 0, mid = 0, high = n - 1;
    while (mid < high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[lo++], a[mid++]);
            break;
        case 1:
            a[mid++];
            break;
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
}

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}