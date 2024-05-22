#include <bits/stdc++.h>

using namespace std;

int main()
{

    stack<int> st;
    stack<int> newSt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // After copy st size 0 and newSt size n;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    // Reverse from st stack
    // while (newSt.empty() != true)
    // {
    //     cout << newSt.top() << endl;
    //     newSt.pop();
    // }

    queue<int> q;
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {

        int val;
        cin >> val;
        q.push(val);
    }

    // while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    // cout << st.size() << endl;
    // cout << newSt.size() << endl;
    if (m == n)
    {
        int count = n;
        int flag = 0;
        while (count > 0)
        {
            flag++;
            if (newSt.top() == q.front())
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
            newSt.pop();
            q.pop();

            count--;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}