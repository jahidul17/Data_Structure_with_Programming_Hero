#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node *next;
};

int main()
{

    node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.next << endl;
    cout << a.next->next->val << endl;

    return 0;
}