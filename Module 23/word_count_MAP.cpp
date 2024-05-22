#include <bits/stdc++.h>

using namespace std;

int main()
{

    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence); // ss in one word from sentence

    map<string, int> mp; // initial 0 value;

    while (ss >> word) // push in word from ss
    {

        // cout << word << endl;
        mp[word]++; // if found value then count value else return 0
    }
    cout << mp["islam"] << endl;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    return 0;
}