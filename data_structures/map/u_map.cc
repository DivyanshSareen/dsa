#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unordered_map<string, int> umap;
    umap["asdf"] = 1;
    umap["b"] = 4;
    for (auto x : umap)
        cout << x.first << " " << x.second;
    return 0;
}