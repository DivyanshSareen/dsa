#include <bits/stdc++.h>
using namespace std;

void insert_sorted(stack<int> &s, int temp)
{
    if (s.empty() || temp < s.top())
    {
        s.push(temp);
    }
    else
    {
        int temp1 = s.top();
        s.pop();
        insert_sorted(s, temp);
        s.push(temp1);
    }
}

void stack_sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    stack_sort(s);
    insert_sorted(s, temp);
}

int main(void)
{
    stack<int> s;
    s.push(10);
    s.push(1);
    s.push(5);
    s.push(2);
    s.push(7);
    s.push(8);
    stack_sort(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}