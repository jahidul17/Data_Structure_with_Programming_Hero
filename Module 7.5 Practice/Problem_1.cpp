#include <bits/stdc++.h>
// Question: Take two singly linked lists as input and check if their sizes are same or not.

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

int size1(Node *head1)
{
    Node *tmp = head1;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}
int size2(Node *head2)
{
    Node *tmp = head2;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void insert_1st_list_at_tail(Node *&head1, Node *&tail1, int val)
{
    Node *newNode = new Node(val);

    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }

    tail1->next = newNode; // connect new node at tail
    tail1 = newNode;       // update tail
}

void insert_2nd_list_at_tail(Node *&head2, Node *&tail2, int val)
{
    Node *newNode = new Node(val);

    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }

    tail2->next = newNode; // connect new node at tail
    tail2 = newNode;       // update tail
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        insert_1st_list_at_tail(head1, tail1, val);
    }

    cout << size1(head1);
    cout << endl;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        insert_2nd_list_at_tail(head2, tail2, val);
    }
    cout << size2(head2) << endl;

    if (size1(head1) == size2(head2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}