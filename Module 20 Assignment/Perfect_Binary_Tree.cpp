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

int depth_count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = depth_count(root->left);
    int r = depth_count(root->right);

    return max(l, r) + 1;
}

int Node_count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = Node_count(root->left);
    int r = Node_count(root->right);

    return r + l + 1;
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
    int d = depth_count(root);
    int n = Node_count(root);

    if (pow(2, d) - 1 == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}