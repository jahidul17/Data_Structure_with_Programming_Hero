#include <bits/stdc++.h>

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

int size(Node *head) // O(n) time complixity function
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL) // O(n)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_head(Node *&head, int val) // O(1) time complixity
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert(Node *head, int pos, int val) // O(n) time complixity function
{

    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++) // O(n)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
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

void print_linked_list(Node *head) // O(n) time complixity function
{

    cout << "Print Linked List" << endl;
    Node *tmp = head;

    while (tmp != NULL) // O(n)
    {
        cout << tmp->val << " " << endl;

        tmp = tmp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    cout << "Tail=" << tail->val << endl;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cout << "Enter pos and val:";
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }

    print_linked_list(head);

    cout << "Tail=" << tail->val << endl;

    return 0;
}