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

void delete_head_node(Node *&head) // O(1) time complixity function
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_node(Node *head, int pos) // O(n) time complixity function
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) // O(n)
    {
        tmp = tmp->next;
    }

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
}

void print_linked_list(Node *head) // O(n) time complixity function
{

    cout << "Print Linked List" << endl;
    Node *tmp = head;

    while (tmp != NULL) // O(n)
    {
        cout << tmp->val << " ";

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

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    cout << endl;

    int pos;
    cout << "Enter delete position: ";
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid delete Index";
    }
    else if (pos == 0)
    {

        delete_head_node(head);
    }
    else
    {

        delete_node(head, pos);
    }

    print_linked_list(head);

    return 0;
}