#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<=n;i++){
        cout<<hash[i+1]<<" ";
    }


}