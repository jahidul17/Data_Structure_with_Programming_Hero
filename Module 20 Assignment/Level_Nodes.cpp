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
void Level_Nodes(Node *root, int x)
{
    // Initial pair
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {

        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        // Do as your wish
        if (x == level)
        {
            v.push_back(node->val);
        }

        // Child push
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
}

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
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
    int x;
    cin >> x;

    int hl = max_height(root);
    Level_Nodes(root, x);

    if (x == 0)
    {
        cout << root->val;
    }
    else if (x > 0 && x < hl)
    {
        for (auto i = v.begin(); i != v.end(); i++)
        {
            cout << *i << " ";
        }
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}