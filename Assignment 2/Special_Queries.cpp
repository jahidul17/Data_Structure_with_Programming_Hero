#include <bits/stdc++.h>

using namespace std;

int main()
{

    queue<string> str;
    int test;
    cin >> test;

    while (test >= 1)
    {
        int manu;
        cin >> manu;

        if (manu == 0)
        {
            string name;
            cin >> name;
            str.push(name);
        }
        else if (manu == 1)
        {
            if (!str.empty())
            {
                cout << str.front() << endl;
                str.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }

        test--;
    }

    return 0;
}