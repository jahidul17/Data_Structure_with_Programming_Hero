#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    b.insert(b.begin()+n,a.begin(),a.end());

    for(int val:b){
        cout<<val<<" ";
    }
    
    return 0;
}