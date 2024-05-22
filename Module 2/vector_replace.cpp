#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v={1,2,3,2,5,2,7,2};

    //replace(v.begin(),v.end(),2,100);   //replace value 2
    replace(v.begin(),v.end()-1,2,100);   //replace value 2 skip last 2 value

    for(int x:v){
        cout<<x<<" ";
    }



}