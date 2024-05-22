#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    getchar();
    while (test--)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        map<string, int> mp;
        string contain_name;
        int max_val = 0;

        while (ss >> word)
        {

            int count_word = ++mp[word];
            if (count_word > max_val)
            {
                max_val = count_word;
                contain_name = word;
            }
        }
        cout << contain_name << " " << max_val << endl;
    }

    return 0;
}