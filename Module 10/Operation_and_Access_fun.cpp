#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> mylist = {10, 20, 30, 10, 50, 10, 40};
    // mylist.remove(10);

    // mylist.sort();   //ascending
    // mylist.sort(greater<int>()); // descending
    // mylist.unique(); // must sort the list first.//O(N), with sort O(NlogN)

    // mylist.reverse();

    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }

    // cout << mylist.front();
    // cout << mylist.back();
    cout << *next(mylist.begin(), 3); // must dereference otherwise not work

    return 0;
}