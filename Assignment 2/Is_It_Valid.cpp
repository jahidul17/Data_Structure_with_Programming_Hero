#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test >= 1)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        test--;
    }

    return 0;
}
