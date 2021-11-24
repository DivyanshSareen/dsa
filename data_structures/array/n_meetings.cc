#include <bits/stdc++.h>
using namespace std;

vector<int> maxMeetings(int s[], int f[], int n)
{
    if (n == 0)
        return {};

    vector<pair<int, int>> v;
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        v.push_back({s[i], f[i]});
    }
    sort(v.begin(), v.end());
    res.push_back(0);
    int temp = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= temp)
        {
            res.push_back(i);
        }
        temp = v[i].second;
    }
    return res;
}

int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};

    int f[] = {2, 4, 6, 7, 9, 9};

    int n = sizeof(s) / sizeof(s[0]);

    vector<int> res = maxMeetings(s, f, n);
    for (auto x : res)
    {
        cout << x;
    }
    return 0;
}