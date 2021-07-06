#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
    }
    else if (root->data < val)
    {
        root = insert(root->right, val);
    }
    else
    {
        root = insert(root->left, val);
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

int main(void)
{
    Node *root = NULL;
    int choice;
    do
    {
        cout << "\nEnter operation number:\n1.Insert\n2.Search\n3.Show\n4.Exit\n";
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
            break;
        case 4:
            break;
        default:
            cout << "Enter valid choice mate";
        }
    } while (choice != 4);
    return 0;
}