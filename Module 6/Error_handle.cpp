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
        if (tmp == NULL) // Error handle
        {
            cout << endl
                 << "Invalid Index" << endl;
            return;
        }
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

    if (head == NULL) // Error handle
    {
        cout << "Head is not avalible" << endl;
        return;
    }

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
        if (tmp == NULL) // Error handle
        {
            cout << endl
                 << "Delete Invalid Index" << endl;
            return;
        }
    }

    if (tmp->next == NULL) // Error handle
    {
        cout << "Delete Invalid Index" << endl;
        return;
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
        cout << "Option 1: Insert at Tail" << endl;       // Already error done
        cout << "Option 2: Print Linked List" << endl;    // Already error done
        cout << "Option 3: Insert any position" << endl;  // Error handle
        cout << "Option 4: Insert Head position" << endl; // Already error done
        cout << "Option 5: Delete position" << endl;      // Error handle
        cout << "Option 6: Delete Head" << endl;          // Error handle
        cout << "Option 7: Terminate" << endl;            // Already error done

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