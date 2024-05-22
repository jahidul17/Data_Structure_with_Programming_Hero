#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> a[i];
    }

    sort(a, a + n); //O(nlog(n))

    while (q--) //O(n)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;

        bool flag = false;

        while (l <= r)  //O(log(n))---So,O(n)*O(logn)=nlog(n)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }

            if (x > a[mid_index])
            {
                // go to left
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }

        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}