#include <iostream>
using namespace std;

void print_union(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i++];
        }
        else if (a[i] > b[j])
        {
            cout << b[j++];
        }
        else
        {
            cout << a[i];
            i++;
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i++];
    }
    while (j < m)
    {
        cout << b[j++];
    }
}

void print_intersection(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cout << a[i];
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main(void)
{
    int a[] = {1, 3, 4, 5, 7};
    int b[] = {2, 3, 5, 6};

    print_union(a, 5, b, 4);
    cout << endl;
    print_intersection(a, 5, b, 4);
    return 0;
}