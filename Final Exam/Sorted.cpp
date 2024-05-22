#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        set<int> s;

        int n;
        cin >> n;

        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (int val : s)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}