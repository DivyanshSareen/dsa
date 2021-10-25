#include <bits/stdc++.h>
using namespace std;

void addEdge(map<int, list<int>> &g, int a, int b)
{
    g[a].push_back(b);
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

void topsort(map<int, list<int>> g)
{
    stack<int> st, t;
    map<int, bool> visited;

    for (auto x : g)
    {
        if (!visited[x.first])
        {
            t.push(x.first);
            visited[x.first] = true;
            for (auto y : x.second)
            {
                if (!visited[y])
                {
                    t.push(y);
                    visited[y] = true;
                }
            }
            while (!t.empty())
            {
                st.push(t.top());
                t.pop();
            }
        }
    }
    while (!st.empty())
    {
        int x = st.top();
        cout << x << " ";
        st.pop();
    }
}

int main()
{
    map<int, list<int>> g;
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 2, 4);
    addEdge(g, 2, 5);
    addEdge(g, 3, 6);
    addEdge(g, 4, 7);
    addEdge(g, 5, 7);
    addEdge(g, 6, 5);
    addEdge(g, 6, 7);
    // addEdge(g, 3, 4);

    printGraph(g);
    // dfs(g, 0);
    // bfs(g, 0);
    topsort(g);

    return 0;
}