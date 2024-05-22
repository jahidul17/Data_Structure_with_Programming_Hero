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
        // // assign root child
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        // same formate
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root); // when root null return false otherwise true.
    }
    while (!q.empty())
    {
        // 1. Ber kora anbo
        Node *p = q.front();
        q.pop();

        // 2. Jabotio ja kaj ache
        int l, r;
        cin >> l >> r;

        Node *myleft;
        Node *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }

        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        // 3. children gulo ke push korbo
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            // p->right==NULL then not enter otherwise enter
            q.push(p->right);
        }
    }
    return root;
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}