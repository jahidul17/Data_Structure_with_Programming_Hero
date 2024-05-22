#include <bits/stdc++.h>
//can not solve
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

void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // Link next pointer and go to last node
    }

    tmp->next = newNode;
}


int size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }

    return count;
    //cout<<count<<endl;

}


void print_linked_list(Node *head)
{

    cout << "Print Linked List" << endl;
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}


int main()
{


    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insert_at_tail(head, val);
    }

    print_linked_list(head);
    cout<<endl<<size(head)<<endl;




    return 0;
}
