#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *children[];
};

void dfs(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    dfs(root->left);
    cout << root->data;
    dfs(root->right);
}

void eul_tour(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    eul_tour(root->left);
    eul_tour(root->right);
    cout << root->data;
}

int main()
{
    Node *root = new Node();
    root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);
    eul_tour(root);
    // dfs(root);

    return 0;
}