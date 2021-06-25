#include <iostream>
using namespace std;

int binary(int a[], int l, int r, int key)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            return binary(a, mid + 1, r, key);
        }
        else
        {
            return binary(a, l, mid - 1, key);
        }
    }
    return -1;
}

int freq(int a[], int n, int key)
{
    int f = 0;
    int index = binary(a, 0, n, key);

    if (index != -1)
    {
        f = f + 1;
        int i = index - 1;
        while (a[i] == key)
        {
            f++;
            i--;
        }
        i = index + 1;
        while (a[i] == key)
        {
            f++;
            i++;
        }
    }

    return f;
}

int main(void)
{
    int a[] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 5, 312, 10004};
    int n = sizeof(a) / sizeof(int);

    cout << freq(a, n, 2);

    return 0;
}