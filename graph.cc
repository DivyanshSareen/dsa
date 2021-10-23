#include <bits/stdc++.h>
using namespace std;

void addEdge(map<int, list<int>> &g, int a, int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

void printGraph(map<int, list<int>> g)
{
    for (auto x : g)
    {
        cout << "vertex " << x.first << ": ";
        for (auto y : x.second)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}

int main()
{
    map<int, list<int>> g;
    addEdge(g, 0, 1);
    addEdge(g, 0, 4);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 3);
    addEdge(g, 3, 4);

    printGraph(g);

    return 0;
}