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

    tail1->next = newNode;
    tail1 = newNode;
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

    tail2->next = newNode;
    tail2 = newNode;
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

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        insert_2nd_list_at_tail(head2, tail2, val);
    }

    if (size1(head1) != size2(head2))
    {
        cout << "NO";
    }
    else
    {
        int flag = 0, signal = 0;
        Node *i, *j;

        for (i = head1, j = head2; i != NULL, j != NULL; i = i->next, j = j->next)
        {
            if (i->val == j->val)
            {
                flag++;
                continue;
            }
            else
            {
                cout << "NO";
                break;
            }
        }

        if (flag == size1(head1))
        {
            cout << "YES";
        }
    }

    return 0;
}