#include <bits/stdc++.h>
using namespace std;
#include <limits>
#include <ios>

struct node
{
    bool isword;
    node *next[26];
};

node *create_node()
{
    node *temp = new node();
    for (int i = 0; i < 26; i++)
    {
        temp->next[i] = NULL;
    }
    temp->isword = false;
    return temp;
}

node *insert(node *root, string word)
{
    node *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        if (temp->next[word[i] - 'a'] == NULL)
        {
            temp->next[word[i] - 'a'] = create_node();
        }
        temp = temp->next[word[i] - 'a'];
    }
    temp->isword = true;
    return root;
}

bool search_node(node *root, string word)
{
    node *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        if (temp->next[word[i] - 'a'] == NULL)
            return false;
        temp = temp->next[word[i] - 'a'];
    }
    return temp->isword;
}

int main(void)
{
    node *root = create_node();
    root = insert(root, "he");
    root = insert(root, "his");
    root = insert(root, "hers");
    root = insert(root, "her");
    cout << search_node(root, "he");
    cout << search_node(root, "hees");
    return 0;
}