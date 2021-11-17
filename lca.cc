#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    vector<Node *> children;

    Node(int data)
    {
        this->data = data;
        children = {};
    }
};

int main()
{
    Node *root = new Node(0);
    root->children.push_back(new Node(1));
    root->children.push_back(new Node(2));
    root->children[0]->children.push_back(new Node(3));
    root->children[1]->children.push_back(new Node(4));
    root->children[1] return 0;
}