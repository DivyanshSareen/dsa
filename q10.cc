#include <iostream>
using namespace std;

int *union(int a[], int n, int b[], int m)
{
    int *c = new int[100];

    return c;
}

int main(void)
{
    int a[] = {1, 3, 4, 5, 7};
    int b[] = {2, 3, 5, 6};

    int *c = union(a, 5, b, 4);
    int *d = intersec(a, 5, b, 4);

        return 0;
}