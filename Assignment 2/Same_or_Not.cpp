#include <bits/stdc++.h>

using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    // Input stack
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Input queue
    for (int i = 0; i < m; i++)
    {

        int val;
        cin >> val;
        q.push(val);
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // cout << endl;

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    if (m == n)
    {
        int flag = 0;
        while (!st.empty())
        {
            flag++;
            if (st.top() == q.front())
            {
                if (m == flag)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}