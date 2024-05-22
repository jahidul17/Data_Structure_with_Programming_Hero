#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class myQueue
{
    list<int> q;

public:
    void push(int val)
    {

        q.push_back(val);
    }
    void pop()
    {

        q.pop_front();
    }

    int front()
    {
        return q.front();
    }
    int size()
    {
        return q.size();
    }
    bool empty()
    {

        return q.empty();
    }
};

int main()
{
    myStack st;
    myQueue q;
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

    // while (st.empty() != true)
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