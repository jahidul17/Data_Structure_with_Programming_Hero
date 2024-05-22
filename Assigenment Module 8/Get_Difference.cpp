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

int largest_value_of_list(Node *head)
{
    int max = INT_MIN;
    while (head != NULL)
    {
        if (max < head->val)
        {
            max = head->val;
        }
        head = head->next;
    }
    return max;
}

int smallest_value_of_list(Node *head)
{
    int min = INT_MAX;
    while (head != NULL)
    {
        if (min > head->val)
        {
            min = head->val;
        }
        head = head->next;
    }
    return min;
}

int main()
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

    cout << largest_value_of_list(head) - smallest_value_of_list(head);

    return 0;
}