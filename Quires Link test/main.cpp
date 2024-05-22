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

void insert_at_before_head(Node *&head, int v) // Done
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void delete_from_head(Node *&head)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_from_position(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head)
{

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

    int test;
    cin>>test;
    while(test>=1)
    {


        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_before_head(head, v);
            print_linked_list(head);
        }

        else if (x == 1)
        {

            insert_at_tail(head, v);
            print_linked_list(head);
        }

        else if (x == 2)
        {
            if (v < size(head))
            {
                if (v == 0)
                {
                    delete_from_head(head);
                    print_linked_list(head);
                }
                else
                {
                    delete_from_position(head, v);
                    print_linked_list(head);
                }
            }
            else
            {
                print_linked_list(head);
            }
        }

        test--;
    }

    return 0;
}
