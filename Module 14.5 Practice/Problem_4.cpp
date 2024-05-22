#include <bits/stdc++.h>

using namespace std;

// class MyStack
// {
// public:
//     queue<int> q;
//     void push(int x) { q.push(x); }

//     int pop()
//     {
//         queue<int> newq;
//         int last;
//         while (!q.empty())
//         {
//             int k = q.front();
//             q.pop();
//             if (q.empty())
//             {
//                 last = k;
//                 break;
//             }
//             newq.push(k);
//         }
//         q = newq;
//         return last;
//     }

//     int top()
//     {
//         queue<int> newq;
//         int last;
//         while (!q.empty())
//         {
//             int k = q.front();
//             q.pop();
//             if (q.empty())
//             {
//                 last = k;
//             }
//             newq.push(k);
//         }
//         q = newq;
//         return last;
//     }

//     bool empty() { return q.empty(); }
// };

int main()
{

    queue<int> q;
    // queue<int> newQ;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {

        int val;
        cin >> val;
        q.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        queue<int> newq;

        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                last = k;
                break;
            }
            newq.push(k);
        }
        q = newq;
        cout << last << endl;
    }

    return 0;
}