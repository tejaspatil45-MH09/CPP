#include<iostream>
using namespace std;

int main(){
    int arr[]={12,34,45,9,8,90,3};
    int n=sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }
}