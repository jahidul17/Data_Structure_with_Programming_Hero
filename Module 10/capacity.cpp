#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> mylist = {10, 20, 30};
    // cout << mylist.max_size();  //MAX siz limitation

    // mylist.clear();
    // cout << mylist.size() << endl;
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    mylist.resize(5);

    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}