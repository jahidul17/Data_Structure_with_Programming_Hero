#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v={10,20,30,40,50,60};

    //vector<int>:: iterator it;  //Or use auto
    auto it = find(v.begin(),v.end(),50); 
    //cout<<*it<<endl; //Value print by derefarence
    //When value is not found iterator position will be end.

    if(it==v.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }

    
    return 0;

}