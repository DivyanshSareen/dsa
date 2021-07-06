#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *get_node(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        root = get_node(val);
    }
    else if (root->data < val)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}

bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == key)
    {
        return true;
    }
    else if (root->data < key)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}

int get_min(Node *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty biches";
        return -1;
    }
    else if (root->left == NULL)
    {
        return root->data;
    }
    return get_min(root->left);
}

int get_max(Node *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty";
        return -1;
    }
    else if (root->right == NULL)
    {
        return root->data;
    }
    return get_max(root->right);
}

int get_height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return max(get_height(root->left), get_height(root->right)) + 1;
}

int main(void)
{
    Node *root = NULL;
    int choice;
    do
    {
        cout << "\nEnter operation number:\n1.Insert\n2.Search\n3.Minimum Element\n4.Maximum Element\n69.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value: ";
            int value;
            cin >> value;
            root = insert(root, value);
            break;
        case 2:
            cout << "Enter value: ";
            int key;
            cin >> key;
            if (search(root, key))
            {
                cout << "Found";
            }
            else
            {
                cout << "Not Found";
            }
            break;
        case 3:
            cout << get_min(root);
            break;
        case 4:
            cout << get_max(root);
            break;
        case 5:
            cout << get_height(root);
            break;
        default:
            cout << "Enter valid choice mate";
        }
    } while (choice != 69);
    return 0;
}