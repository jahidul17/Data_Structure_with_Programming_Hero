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
void insert_tail2(Node *&head2, Node *&tail2, int val)
{
    Node *newNode = new Node(val);

    if (tail2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }

    tail2->next = newNode;
    newNode->prev = tail2;
    tail2 = tail2->next;
}

// void print_list1(Node *head1)
// {
//     Node *tmp = head1;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
// void print_list2(Node *head2)
// {
//     Node *tmp = head2;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_tail2(head2, tail2, val);
    }

    // print_list2(head2);

    size1(head1);
    size2(head2);
    // cout << size1(head1) << endl;

    if (size1(head1) == size2(head2))
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        int flag = 0;

        while (tmp1 != NULL)
        {
            flag++;
            if (tmp1->val == tmp2->val)
            {
                if (size1(head1) == flag)
                {
                    cout << "YES";
                    break;
                }
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
            }
            else
            {
                cout << "NO";
                break;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}