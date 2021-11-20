#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] = {{2, 6, 12, 34},
                     {1, 9, 20, 1000},
                     {23, 34, 90, 2000}};
    int k = 3;
    int n = 4;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i][0], i});
    }

    vector<int> idx(k, 0);
    vector<pair<int, int>> temp;
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        if (idx[p.second] + 1 < n)
        {
            pq.push({arr[p.second][idx[p.second] + 1], p.second});
            idx[p.second] += 1;
        }
        temp.push_back(p);
        pq.pop();
    }
    for (auto x : temp)
    {
        cout << x.first << " ";
    }
    return 0;
}