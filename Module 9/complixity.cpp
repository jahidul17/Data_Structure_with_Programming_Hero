#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;

    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
}

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

void delete_at_position(Node *head, int pos)
{
    // 10 20 30 40
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {

        tmp = tmp->next;
    }

    Node *delete_node = tmp->next;

    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete delete_node;
}

void delete_tail(Node *&tail)
{
    Node *delete_node = tail;
    tail = tail->prev;

    delete delete_node;
    tail->next = NULL;
}

void delete_head(Node *&head)
{
    Node *delete_node = head;

    head = head->next;
    delete delete_node;

    head->prev = NULL;
}

int main()
{

    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // Connection Node
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    int pos;
    cin >> pos;

    if (pos >= size(head)) // size and null case handle
    {
        cout << "Invalid delete Index" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}