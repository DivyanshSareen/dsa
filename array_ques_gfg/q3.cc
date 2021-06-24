#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(&a[i], &a[j]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}