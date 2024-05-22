#include<bits/stdc++.h>

using namespace std;

int main(){

    // vector<int> v={10,20,30,40};
    // vector<int> x={1,2,3};  

    // v=x; //Assign another vector.

    // for(int i=0;i<v.size();i++){

    //     cout<<x[i]<<endl;

    // }




    vector<int> v={10,20,30,40};

    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<endl;
    }



}
