#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // int n;
    // cin>>n;
    // cin.ignore();
    // vector<string> v(n);

    // for(int i=0;i<n;i++){
        
    //     getline(cin,v[i]);

    // }
    // for(string val:v){
    //     cout<<val<<endl;
    // }

    vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+2, v.end());

    for(int val:v){
        cout<<val<<endl;
    }


}