#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[], int a, int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

int main()
{
    vector<int> g[5];
    addEdge(g, 0, 1);
    addEdge(g, 0, 4);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 3);
    addEdge(g, 3, 4);
}