#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;

    while (test >= 1)
    {
        stack<char> st;
        string str;
        cin >> str;

        for (char c : str)
        {

            if (c == '1' && !st.empty())
            {
                if (st.top() != '1')
                {
                    st.pop();
                }
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