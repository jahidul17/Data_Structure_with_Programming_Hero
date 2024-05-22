#include <bits/stdc++.h>
// Question: Take a singly linked list as input and
// print the middle element. If there are multiple values in the middle print both.
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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

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

    int n = size(head) / 2;

    if (size(head) % 2 == 0)
    {

        Node *tmp = head;

        for (int i = 1; i <= n - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " ";
    }

    Node *tmp = head;

    for (int i = 1; i <= n; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val;

    return 0;
}