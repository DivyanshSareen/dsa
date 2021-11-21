#include <bits/stdc++.h>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Recursive function to perform preorder traversal on the tree and
// fill the map with the diagonal sum of elements
void helper(Node *root, int diagonal, map<int, int> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[diagonal] += root->data;
    helper(root->left, diagonal + 1, m);
    helper(root->right, diagonal, m);
}

void diagonalSum(Node *root)
{
    map<int, int> m;

    helper(root, 0, m);

    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }
}

int main()
{
    /* Construct the following tree
               1
             /  \
            /    \
           2      3
          /     /  \
         /     /    \
        4     5     6
             / \
            /   \
           7     8
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    diagonalSum(root);

    return 0;
}