#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<string> mylist;

    string str;

    while (true)
    {
        cin >> str;
        if (str.compare("end") == 0)
        {
            break;
        }
        mylist.push_back(str);
    }

    int test;
    cin >> test;
    auto curr_pos = mylist.begin();

    while (test >= 1)
    {
        string str_ck;
        cin >> str_ck;

        if (str_ck.compare("visit") == 0)
        {
            string str_w;
            cin >> str_w;

            auto it = find(mylist.begin(), mylist.end(), str_w);

            if (it != mylist.end())
            {
                curr_pos = it;
                cout << *curr_pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (str_ck.compare("next") == 0)
        {
            if (next(curr_pos) != mylist.end())
            {
                curr_pos++;
                cout << *curr_pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (str_ck.compare("prev") == 0)
        {
            if (curr_pos != mylist.begin())
            {
                curr_pos--;
                cout << *curr_pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        test--;
    }

    // for (auto it = mylist.begin(); it != mylist.end(); ++it)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    return 0;
}