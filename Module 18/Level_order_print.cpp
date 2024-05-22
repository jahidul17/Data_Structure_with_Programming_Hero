#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree Not Found";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // delete from queue
        Node *f = q.front(); // f=front value
        q.pop();

        // You can do as your wish
        cout << f->val << " ";

        // Print tree left from right...........
        // assign root child
        // if (f->left != NULL)
        // {
        //     q.push(f->left);
        // }
        // // same formate
        // if (f->right)
        // { // when true get in condition but NULL return false.
        //     q.push(f->right);
        // }

        // Print tree right from left...........
        // assign root child
        if (f->right)
        {
            q.push(f->right);
        }
        if (f->left != NULL)
        {
            q.push(f->left);
        }
    }
}

//                       10
//           20                       30
//       40      90                           50
//          60      100                     70  80
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;
    b->right = d;

    d->left = f;
    d->right = g;

    h->right = i;

    // call
    level_order(root);

    return 0;
}