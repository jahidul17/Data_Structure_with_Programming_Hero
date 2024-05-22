#include <bits/stdc++.h>

using namespace std;

int main()
{
    // SET use for
    // Sorting && Remove Duplicate || Searching
    // Desending sort is not possible Reson of Balenced Binary Tree
    // SET use internally BST and BST remove duplicate value
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(longN)
    }

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Searching
    // cout << s.count(100) << endl;
    if (s.count(71))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}