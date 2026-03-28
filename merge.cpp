#include<bits/stdc++.h>
using namespace std;

void merget(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int l=low;
    int r=mid+1;
    while(l<=mid && r<=high){
        if(arr[l]<arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while (l<=mid)
    {
     temp.push_back(arr[l]);
     l++;  
    }
    while(r<=high){
        temp.push_back(arr[r]);
        r++;
    }
    int n=arr.size();
    for(int i=low;i<high;i++){
       arr[i]=temp[i-low];
    }
    
}

void mergesort(vector<int> &arr,int low,int high){
if(low==high)return;
int mid=(low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merget(arr,low,mid,high);
}


int main(){
    vector<int> arr;
    int n;cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int low=0;
    int high=n-1;
    mergesort(arr,low,high);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}