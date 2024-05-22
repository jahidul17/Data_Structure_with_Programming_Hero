#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool found = false;
    int b[n];
    int k = 0;
    b[k] = a[k];

    while (k < n)
    {

        for (int i = k + 1; i < n; i++)
        {
            if (b[k] == a[i])
            {
                found = true;
                break;
            }
        }

        if (found == true)
        {
            break;
        }
        k++;
    }

    if (found == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}