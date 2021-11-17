// Note: only some parts are written by me, utilites etc are from gfg.
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
public:
    int data;
    Node *next;
};

/* function prototypes */
Node *SortedMerge(Node *a, Node *b);
void FrontBackSplit(Node *source,
                    Node **frontRef, Node **backRef);

/* sorts the linked list by changing next pointers (not data) */
void MergeSort(Node **headRef)
{
    Node *head = *headRef;
    Node *a;
    Node *b;

    /* Base case -- length 0 or 1 */
    if ((head == NULL) || (head->next == NULL))
    {
        return;
    }

    /* Split head into 'a' and 'b' sublists */
    FrontBackSplit(head, &a, &b);

    /* Recursively sort the sublists */
    MergeSort(&a);
    MergeSort(&b);

    /* answer = merge the two sorted lists together */
    *headRef = SortedMerge(a, b);
}

/* See https:// www.geeksforgeeks.org/?p=3622 for details of this
function */
Node *SortedMerge(Node *a, Node *b)
{
    Node *res = NULL;

    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);

    if (a->data <= b->data)
    {
        res = a;
        res->next = SortedMerge(a->next, b);
    }
    else
    {
        res = b;
        res->next = SortedMerge(a, b->next);
    }
    return (res);
}

/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into front and back halves,
	and return the two lists using the reference parameters.
	If the length is odd, the extra node should go in the front list.
	Uses the fast/slow pointer strategy. */
void FrontBackSplit(Node *source,
                    Node **frontRef, Node **backRef)
{
    Node *slow = source;
    Node *fast = source->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

/* Function to insert a node at the beginning of the linked list */
void push(Node **head_ref, int new_data)
{
    /* allocate node */
    Node *new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

int main()
{
    Node *res = NULL;
    Node *a = NULL;

    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    push(&a, 20);
    push(&a, 3);
    push(&a, 2);

    MergeSort(&a);

    cout << "Sorted Linked List is: \n";
    printList(a);

    return 0;
}
