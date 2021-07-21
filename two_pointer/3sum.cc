#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> three_sum(vector<int> v, int target = 0)
{
    if (v.empty())
        return {};
    vector<vector<int>> r;
    for (int i = 0; i < v.size(); i++)
    {
        int j, k;
        j = i + 1;
        k = v.size() - 1;
        while (j < k)
        {
            if (v[j] + v[k] == target - v[i])
            {
                r.push_back({i, j, k});
                j++;
                k++;
            }
            else if (v[j] + v[k] > target - v[i])
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return r;
}

int main(void)
{
    vector<int> v = {-5, -1, 0, 1, 2, 3};
    vector<vector<int>> res;
    res = three_sum(v);
    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y;
        }
        cout << endl;
    }
    return 0;
}