#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, int> mp;               // Duplicate value remove
    mp.insert({"Sakib al hasan", 75}); // key(first),value(second)
    mp.insert({"Tamim iqbal", 19});
    mp.insert({"Tamim iqba", 29});
    mp.insert({"RAht", 100});
    mp.insert({"RAht", 100});
    mp.insert({"Shamim iqbal", 79});
    mp.insert({"akib", 7009});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(log(n)) for one value output
    }

    // Or
    // O(logN)
    // mp["Sakib"] = 79; // O(log(n)) for one value insert
    // mp["Rakib"] = 99;
    // mp["Zahid"] = 75;
    // mp["Mia"] = 67;

    // Reprasent key

    // cout << mp["RAht"] << endl;
    // if (mp.count("jahid"))
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "Not found";
    // }

    return 0;
}