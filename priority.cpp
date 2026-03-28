#include<bits/stdc++.h>
using namespace std;

int findthirdlargest(vector<int> &arr,int n){
    if(arr.size()<3)return -1;

 priority_queue<int,vector<int>,greater<int>>pq;
 for(int x:arr){
    pq.push(x);
    if(pq.size()>3){
        pq.pop();
    }
 }

 return pq.size()==3? pq.top():-1;
}

int main(){

    vector<int>arr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int ans=findthirdlargest(arr,n);
    cout<<ans;
    return 0;
}