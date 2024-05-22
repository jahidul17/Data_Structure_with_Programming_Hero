#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v={1,2,3,4,5,6};

    v.erase(v.begin()+2);   //one value erase

    //v.erase(v.begin()+1,v.begin()+4);   //multi value erase Or

    v.erase(v.begin()+1,v.end()-1);   //multi value erase

    for(int x:v){   //Range base for loop
        cout<< x <<" ";
    }

}