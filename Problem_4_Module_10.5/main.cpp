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
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; // 100->30
    tmp->next = newNode;       // 20->100

    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
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

void insert_head(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    while (n >= 1)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            insert_head(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }
        else if (pos > size(head))
        {
            cout << "Invalid Index" << endl;
        }
        else
        {
            insert_at_position(head, pos, val);
            print_normal(head);
            print_reverse(tail);
        }

        n--;
    }

    return 0;
}
