#include<bits/stdc++.h>

using namespace std;

bool IsPositive(int i)
{ 
return (i > 0); 
   
}
bool IsNegative(int i)
{ 
return (i < 0); 
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

	replace_if(arr, arr + n, IsPositive, 1);
	replace_if(arr, arr + n, IsNegative, 2);

	for (int i = 0; i < n; i++){
        //cout << ' ' << arr[i];
        cout << arr[i]<<" ";
    }
    
    return 0;
}