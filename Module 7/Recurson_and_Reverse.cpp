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

void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // Link next pointer and go to last node
    }

    tmp->next = newNode;
}

// void print_linked_list(Node *head)
// {

//     cout << "Print Linked List" << endl;
//     Node *tmp = head;

//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";

//         tmp = tmp->next;
//     }
// }

void print_reverse_with_recurson(Node *n) // O(n) time complixity function
{                                         // Reverse with recurson

    if (n == NULL)
    { // Base case
        return;
    }

    print_reverse_with_recurson(n->next);
    cout << n->val << " ";
}

void print_recurson(Node *n) // O(n) time complixity function
{                            // Recurson function

    if (n == NULL)
    { // Base case
        return;
    }

    cout << n->val << " ";
    print_recurson(n->next);
}

int main()
{

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);

    // head->next = a;
    // a = b->next;
    // b = c->next;
    // c = d->next;

    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insert_at_tail(head, val);
    }

    // print_linked_list(head);

    print_recurson(head);
    cout << endl;
    print_reverse_with_recurson(head);

    return 0;
}