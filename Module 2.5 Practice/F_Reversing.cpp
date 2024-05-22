#include<bits/stdc++.h>

//Haven't accept

using namespace std;

int main(){

   int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //Don't use built-in-functions.
    //reverse(v.begin(), v.end());
    for(int val:v){
        cout<<val<<" ";
    }

  
    
    return 0;
}