#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *insert_tail(Node *root, int val)
{
    Node *temp = new Node(val);
    if (temp == NULL)
    {
        cout << "value was not inserted(overflow)";
    }
    else
    {
        if (root == NULL)
        {
            root = temp;
            return root;
        }
        Node *temp_root = root;
        while (temp_root->next != NULL)
        {
            temp_root = temp_root->next;
        }
        temp_root->next = temp;
    }
    return root;
}

Node *insert_head(Node *root, int val)
{
    Node *temp = new Node(val);
    temp->next = root;
    root = temp;
    return root;
}

void display(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void search(Node *root, int key)
{
    if (!root)
    {
        cout << "empty list" << endl;
        return;
    }
    else
    {
        Node *temp = root;
        while (temp->next != NULL)
        {
            if (temp->data == key)
            {
                cout << "key found" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "key not found" << endl;
    }
}

Node *delete_head(Node *root)
{
    Node *temp = root;
    root = root->next;
    delete temp;
    return root;
}

Node *delete_node(Node *root, int val)
{
    if (!root)
    {
        return root;
    }
    if (root->data == val)
    {
        return delete_head(root);
    }
    Node *temp = root;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "element not found";
        return root;
    }
    else
    {
        Node *temp1 = temp->next;
        temp->next = temp->next->next;
        delete temp1;
        return root;
    }
}

Node *it_rev(Node *root)
{
    Node *prev = NULL;
    Node *curr = root;
    Node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    root = prev;
    return root;
}

void disp_rev(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    disp_rev(root->next);
    cout << root->data;
}

Node *rev(Node *root, Node *curr)
{
    if (curr->next == NULL)
    {
        root = curr;
        return root;
    }
    root = rev(root, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
    return root;
}

int main()
{
    Node *root = NULL;
    root = insert_tail(root, 1);
    root = insert_tail(root, 2);
    root = insert_tail(root, 3);
    root = insert_tail(root, 4);
    root = insert_head(root, 5);
    display(root);
    search(root, 3);
    // root = delete_node(root, 6);
    display(root);
    root = it_rev(root);
    display(root);
    // disp_rev(root);
    root = rev(root, root);
    display(root);
    return 0;
}