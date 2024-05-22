#include <bits/stdc++.h>
// Question: Take a singly linked list as input and print the reverse of the linked list.

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode; // connect new node at tail
    tail = newNode;       // update tail
}

void reverse(Node *n)
{

    if (n == NULL)
    {
        return;
    }
    reverse(n->next);
    cout << n->val << " ";
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    reverse(head);

    return 0;
}