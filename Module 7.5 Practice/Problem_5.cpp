#include <bits/stdc++.h>
// Question: Take a singly linked list as input and sort
// it in descending order. Then print the list.
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

void print_linked_list(Node *head) // O(n) time complixity function
{
    Node *tmp = head;

    while (tmp != NULL) // O(n)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}

void sort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next) // O(n)*O(n)=O(n^2) time complixity and it is not good.
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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

    // for (Node *i = head; i->next != NULL; i = i->next) // O(n)*O(n)=O(n^2) time complixity and it is not good.
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val < j->val)
    //         {
    //             swap(i->val, j->val);
    //         }
    //     }
    // }

    sort(head);

    print_linked_list(head);

    return 0;
}