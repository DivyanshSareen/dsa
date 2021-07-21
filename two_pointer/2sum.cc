#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> two_sum(vector<int> v, int target = 0)
{
    if (v.empty())
    {
        return {};
    }
    int i, j;
    i = 0;
    j = v.size() - 1;
    vector<vector<int>> r;
    while (i < j)
    {
        if (v[i] + v[j] == target)
        {
            // cout << i << j << endl;
            r.push_back({i, j});
            i++;
            j--;
        }
        if (v[i] + v[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return r;
}

int main(void)
{
    std::vector<int> v = {
        -5,
        -1,
        0,
        1,
        2,
        3,
        5};
    vector<vector<int>> res;
    res = two_sum(v);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j];
        cout << endl;
    }
    return 0;
}