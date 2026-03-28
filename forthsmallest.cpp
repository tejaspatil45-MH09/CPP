#include<bits/stdc++.h>
using namespace std;

int findsecondsmallest(vector<int> &arr,int n){
    if(arr.size()<4)return -1;
    priority_queue<int>pq;

    for(auto x:arr){
        pq.push(x);
        if(pq.size()>4){
            pq.pop();
        }
    }
    return pq.size()==4?pq.top():-1;
}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    int ans=findsecondsmallest(arr,n);
    cout<<ans;
}