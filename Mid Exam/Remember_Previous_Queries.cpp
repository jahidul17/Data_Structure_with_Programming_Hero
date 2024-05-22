#include <bits/stdc++.h>

using namespace std;

void print_list(list<int> val)
{
    list<int>::iterator it;
    for (it = val.begin(); it != val.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> mylist;
    int test;
    cin >> test;

    while (test >= 1)
    {

        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            mylist.push_front(v);
            cout << "L -> ";
            print_list(mylist);
            mylist.reverse();
            cout << "R -> ";
            print_list(mylist);
            mylist.reverse();
        }
        else if (x == 1)
        {
            mylist.push_back(v);
            cout << "L -> ";
            print_list(mylist);
            mylist.reverse();
            cout << "R -> ";
            print_list(mylist);
            mylist.reverse();
        }
        else if (x == 2)
        {
            if (mylist.size() > v)
            {
                if (v == 0)
                {
                    mylist.pop_front();
                    cout << "L -> ";
                    print_list(mylist);
                    mylist.reverse();
                    cout << "R -> ";
                    print_list(mylist);
                    mylist.reverse();
                }
                else
                {
                    mylist.erase(next(mylist.begin(), v));
                    cout << "L -> ";
                    print_list(mylist);
                    mylist.reverse();
                    cout << "R -> ";
                    print_list(mylist);
                    mylist.reverse();
                }
            }
            else
            {
                cout << "L -> ";
                print_list(mylist);
                mylist.reverse();
                cout << "R -> ";
                print_list(mylist);
                mylist.reverse();
            }
        }

        test--;
    }

    return 0;
}