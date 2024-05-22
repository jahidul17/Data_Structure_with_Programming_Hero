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

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
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

void sort(Node *head)
{
    Node *dup;
    for (Node *i = head; i->next != NULL; i = i->next) // O(n)*O(n)=O(n^2) time complixity and it is not good.
    {


        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->next->val)
            {
                /* sequence of steps is important here */
                dup = j->next;
                j->next = j->next->next;
                delete (dup);
            }
            else
            {
                /* This is tricky */
                j = j->next;
            }
        }
    }
    cout << endl;
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

    sort(head);
    print_linked_list(head);

    return 0;
}
