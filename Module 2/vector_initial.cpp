#include <bits/stdc++.h>

using namespace std;

int main()
{
    //vector<int> n;

    //vector<int> n(5);
    //cout<<n.size()<< endl;

    //vector<int> n(5,10);
    
    //  vector<int> v2(5,100);
    //  vector<int> n(v2);

    // for(int i=0;i<n.size();i++){

    //     cout<<n[i]<<" ";
    // }



    int n=6;
    int a[n]={1,2,3,4,5,6};
    vector<int> tm(a,a+n);

    for(int i=0;i<tm.size();i++){

        cout<<tm[i]<<" ";
    }

    return 0;
}
