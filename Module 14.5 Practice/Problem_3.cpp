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
    while (newSt.empty() != true)
    {
        cout << newSt.top() << endl;
        newSt.pop();
    }

    return 0;
}