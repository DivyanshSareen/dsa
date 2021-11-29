#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x, y;
    vector<pair<int, int>> v;
    v = {{5, 24},
         {39, 60},
         {15, 28},
         {27, 40},
         {50, 90}};
    n = v.size();
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    int limit = v[0].second;
    int c = 0;
    int max_length = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first > limit)
        {
            c == 0 ? c += 2 : c++;
        } 
        else if (max_length > c)
        {
            max_length = c;
            c = 0;
        }
    }
    cout << max_length;
    return 0;
}
