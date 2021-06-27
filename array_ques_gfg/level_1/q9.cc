#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void sort(int a[], int n)
{
    int i = 0, j = -1;
    while (i < n)
    {
        if (a[i] < 0)
        {
            j++;
            swap(a[i], a[j]);
        }
        i++;
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
        cout << a[i];
    }
}