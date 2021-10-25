#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data = 0)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
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

int main()
{
    Node *root = new Node();
    root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->right->left->left = new Node(6);

    dfs(root);

    return 0;
}