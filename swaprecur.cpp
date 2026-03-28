#include<iostream>
using namespace std;

void swapr(int l,int arr[],int r){
if(l>r){
    return;
}
int temp=arr[l];
arr[l]=arr[r];
arr[r]=temp;

swapr(l+1,arr,r-1);
}


int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;int r=n-1;
    swapr(l,arr,r);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}