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

void insert_tail1(Node *&head1, Node *&tail1, int val)
{
    Node *newNode = new Node(val);

    if (tail1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }

    tail1->next = newNode;
    newNode->prev = tail1;
    tail1 = tail1->next;
}

void IsPalindrome(Node *head1, Node *tail1)
{
    Node *i = head1;
    Node *j = tail1;

    // condition for even size---i->next != j
    // condition for odd size---i != j
    while (i != j && i->next != j)
    {
        // if (i->val == j->val)
        // {
        //     i = i->next;
        //     j = j->prev;
        // }
        if (i->val != j->val)
        {
            break;
        }
        else
        {
            i = i->next;
            j = j->prev;
        }
    }
    if (i->val == j->val)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

void print_list1(Node *head1)
{
    Node *tmp = head1;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_tail1(head1, tail1, val);
    }

    // print_list1(head1);
    IsPalindrome(head1, tail1);
    // print_list1(head1);

    return 0;
}