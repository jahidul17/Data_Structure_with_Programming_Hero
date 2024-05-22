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
vector<int> v;
void Sum_without_leaf(Node *root)
{

    if (root == NULL)
    {
        return v.push_back(0);
    }

    if (root->left == NULL && root->right == NULL)
    {
        return v.push_back(0);
    }
    else
    {
        Sum_without_leaf(root->left);
        Sum_without_leaf(root->right);
        v.push_back(root->val);
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
    Sum_without_leaf(root);
    int sum = 0;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        sum = sum + *i;
    }
    cout << sum;

    return 0;
}