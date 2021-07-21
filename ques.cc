#include <iostream>
using namespace std;

void bsearch_r(int a[], int l, int r, int e)
{
    static int c;
    if (l > r)
    {
        cout << "NO";
        return;
    }

    int mid = l + (r - l) / 2;
    if (a[mid] == e)
    {
        c++;
        printf("Present\nNumber of Comparisons: %d\n", c);
        cout << c;
        return;
    }
    else if (a[mid] < e)
    {
        c++;
        l = mid + 1;
        return bsearch_r(a, l, r, e);
    }
    else
    {
        r = mid - 1;
        return bsearch_r(a, l, r, e);
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l;
        cin >> l;
        int a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;
        bsearch_r(a, 0, l, key);
    }
    return 0;
}