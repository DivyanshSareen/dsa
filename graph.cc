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

void dfs(map<int, list<int>> g, int src)
{
    stack<int> st;
    map<int, bool> visited;
    st.push(src);
    visited[src] = true;
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        cout << temp << " ";
        for (auto x : g[temp])
        {
            if (!visited[x])
            {
                st.push(x);
                visited[x] = true;
            }
        }
    }
}

void bfs(map<int, list<int>> g, int src)
{
    queue<int> q;
    map<int, bool> visited;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        for (auto x : g[temp])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
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

    // printGraph(g);
    // dfs(g, 0);
    bfs(g, 0);
    return 0;
}