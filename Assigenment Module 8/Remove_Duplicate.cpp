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

void delete_node(Node *head, int val)
{
    Node *tmp2 = head;
    while (tmp2->next != NULL)
    {
        if (tmp2->next->val == val)
        {
            Node *del_node = tmp2->next;
            tmp2->next = tmp2->next->next;
            delete del_node;
        }
        else
        {
            tmp2 = tmp2->next;
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

    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_node(tmp, tmp->val);
        tmp = tmp->next;
    }

    print_linked_list(head);

    return 0;
}