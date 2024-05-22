
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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << "Insert at head" << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next; // Link next pointer and go to last node
    }

    // tmp ekhon last node e
    tmp->next = newNode;
    cout << "Inserted at tail" << endl;
}

void print_linked_list(Node *head)
{

    cout << "Print Linked List" << endl;
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " " << endl;

        tmp = tmp->next;
    }
}

int main()
{

    Node *head = NULL;

    while (true)
    {

        cout << "Option:1 Insert at tail" << endl;
        cout << "Option:2 Print linked list" << endl;
        cout << "Option:3 Terminated" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            while (true)
            {

                int v;
                cin >> v;

                if (v == -1)
                    break;
                insert_at_tail(head, v);
            }
        }

        else if (op == 2)
        {
            print_linked_list(head);
        }

        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}