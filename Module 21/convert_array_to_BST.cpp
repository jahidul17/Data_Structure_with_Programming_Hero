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

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *rootLeft = convert(a, n, l, mid - 1);
    Node *rootRight = convert(a, n, mid + 1, r);
    root->left = rootLeft;
    root->right = rootRight;

    return root;
}

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

        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Node *root = convert(a, n, 0, n - 1);

    level_order(root);

    return 0;
}