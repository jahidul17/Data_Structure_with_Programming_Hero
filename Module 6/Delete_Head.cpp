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

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head->next;
    head = newNode;
    cout << "Inserted at head" << endl;
}

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
        tmp = tmp->next;
    }

    // tmp ekhon last node e
    tmp->next = newNode;
    cout << "Inserted at tail" << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void delete_from_head(Node *&head)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Delete Head" << endl;
}

void delete_from_position(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Delete Position" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << "Your Linked List:";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert any position" << endl;
        cout << "Option 4: Insert Head position" << endl;
        cout << "Option 5: Delete position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }

        else if (op == 3)
        {
            int pos, v;
            cout << "Insert position: ";
            cin >> pos;
            cout << "Insert value: ";
            cin >> v;

            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }

        else if (op == 4)
        {
            int v;
            cout << "Insert at Head: ";
            cin >> v;
            insert_at_head(head, v);
        }

        else if (op == 5)
        {
            int pos;
            cout << "Enter delete position: ";
            cin >> pos;

            if (pos == 0)
            {
                delete_from_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }

        else if (op == 6)
        {
            delete_from_head(head);
        }

        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}