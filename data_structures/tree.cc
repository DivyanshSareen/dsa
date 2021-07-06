#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(void)
{
    struct Node *root = new Node(5);
    root->left = new Node(6);
    root->left = new Node(7);

    return 0;
}