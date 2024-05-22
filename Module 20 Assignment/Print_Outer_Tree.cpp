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

void count_left_node(Node *root)
{

    if (root->left)
    {
        count_left_node(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        count_left_node(root->right);
        cout << root->right->val << " ";
    }
}

void print_right_node(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << " ";
        print_right_node(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right_node(root->left);
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

    if (root->left)
    {
        count_left_node(root);
    }
    cout << root->val << " ";
    if (root->right)
    {
        print_right_node(root);
    }

    return 0;
}