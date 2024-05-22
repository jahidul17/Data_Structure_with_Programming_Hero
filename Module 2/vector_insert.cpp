#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v={1,2,3,4,5,6};

    v.insert(v.begin()+2,10);   //one value insert

    // vector<int> v2={100,200,300};

    // v.insert(v.begin()+3,v2.begin(),v2.end());  //v2 array insert

    for(int x:v){   //Range base for loop
        cout<< x <<" ";
    }

}