#include<bits/stdc++.h>
using namespace std;

vector<int>leader(vector<int>&arr){
vector<int>lead;
    int n=arr.size();
int max=arr[arr.size()-1];
for(int i=n-1;i>=0;i--){
    if(arr[i]>=max){
        max=arr[i];
        lead.push_back(arr[i]);
    }
}
return lead;
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

vector<int>ans=leader(arr);
for(auto it:ans){
    cout<<it<<" ";
}

}