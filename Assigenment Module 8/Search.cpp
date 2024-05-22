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

void print_linked_list(Node *head) // O(n) time complixity function
{
    Node *tmp = head;

    while (tmp != NULL) // O(n)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}

int main()
{

    int test;
    cin >> test;

    while (test)
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

        int x, count = 0, flag = 1;
        cin >> x;

        for (Node *i = head; i != NULL; i = i->next) // O(n)*O(n)=O(n^2) time complixity and it is not good.
        {

            if (x == i->val)
            {
                flag++;
                break;
            }
            count++;
        }
        if (flag == 2)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

        test--;
    }

    return 0;
}