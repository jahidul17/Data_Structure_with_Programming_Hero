#include <bits/stdc++.h>

using namespace std;

class myStack1
{
public:
    list<int> L1;

    void push(int val)
    {
        L1.push_back(val); // O(1)
    }
    void pop()
    {
        L1.pop_back(); // O(1)
    }
    int top()
    {
        return L1.back(); // O(1)
    }
    int size()
    {
        return L1.size(); // O(1)
    }
    bool empty() // O(1)
    {
        if (L1.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class myStack2
{
public:
    list<int> L2;

    void push(int val)
    {
        L2.push_back(val); // O(1)
    }
    void pop()
    {
        L2.pop_back(); // O(1)
    }
    int top()
    {
        return L2.back(); // O(1)
    }
    int size()
    {
        return L2.size(); // O(1)
    }
    bool empty() // O(1)
    {
        if (L2.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // Step 1 Input
    myStack1 st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    // Step 2 Input
    myStack1 st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    // Check condition
    if (m == n)
    {
        int flag = 0;
        while (!st2.empty())
        {
            flag++;
            if (st2.top() == st1.top())
            {
                if (st2.size() == flag)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}