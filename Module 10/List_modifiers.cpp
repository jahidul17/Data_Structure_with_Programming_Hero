#include <bits/stdc++.h>

using namespace std;

int main()
{

    // // list<int> mylist;
    // list<int> list2 = {10, 20, 30};
    // // mylist = list2;//Or
    // list<int> mylist(list2);
    // // mylist.assign(list2.begin(), list2.end());

    // list<int> mylist = {10, 20, 30, 40};
    // mylist.pop_back();  //delete from list at tail
    // mylist.pop_front(); // delete from list at head

    // mylist.push_back(40);

    // mylist.insert(next(mylist.begin(), 2), 100);
    // mylist.insert(next(mylist.begin(), 2), {100, 200, 300});
    // mylist.insert(next(mylist.begin(), 4), 100);//Insert loop cyclewise

    // mylist.erase(next(mylist.begin(), 2));

    // list<int> newlist = {500, 600, 700};
    // mylist.insert(next(mylist.begin(), 2), newlist.begin(), newlist.end());//Or

    // vector<int> v = {50, 60, 70};
    // mylist.insert(next(mylist.begin(), 2), v.begin(), v.end());

    // list<int> mylist = {10, 20, 30, 40, 50, 60, 70, 80};
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5)); // 30,40,50 delete

    // list<int> mylist = {10, 20, 30, 40, 30, 60, 30, 80};
    // replace(mylist.begin(), mylist.end(), 30, 100);

    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    list<int> mylist = {10, 20, 30, 40, 30, 60, 30, 80};
    auto it = find(mylist.begin(), mylist.end(), 60);
    if (it == mylist.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}