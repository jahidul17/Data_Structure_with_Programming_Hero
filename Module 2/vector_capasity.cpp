#include <bits/stdc++.h>

using namespace std;

int main(){

        vector<int> v;
       //cout<<v.max_size()<<endl;
        // cout<<v.capacity()<<endl;
        // v.push_back(10);
        // cout<<v.capacity()<<endl;
        // v.push_back(20);
        // cout<<v.capacity()<<endl;
        // v.push_back(30);
        // cout<<v.capacity()<<endl;
        //  v.push_back(40);
        //  cout<<v.capacity()<<endl; //When limit over then capacity double
        //  v.push_back(50);
        //  cout<<v.capacity()<<endl;



        // v.push_back(10);
        // v.push_back(20);
        // v.push_back(30);
        // v.push_back(40);

        // v.clear();

        // cout<<v.size()<<endl;

        //  for(int i=0;i<v.size();i++){
        //      cout<<v[i]<<" ";
        // }

        // cout<<v[3]<<endl;   //So, memory haven't clear






        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);

       //v.resize(2);
       //v.resize(7);
       v.resize(7,100);
       

        cout<<v.size()<<endl;

         for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";
        }

        vector<int> tes{};//if vector empty return 1 else 0
        cout<<endl;
        cout<<tes.empty();


        return 0;
}