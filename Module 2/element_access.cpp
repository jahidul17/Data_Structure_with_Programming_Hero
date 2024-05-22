#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v={1,2,3,4,5,6};

        // //cout<<v[v.size()-1]; //Or
        // cout<<v.back()<<endl;

        // //cout<<v[0]; //Or
        // cout<<v.front();


        for(auto it=v.begin();it<v.end();it++){
            cout<<*it<<" ";//print by dereference
        }

    
}
