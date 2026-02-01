#include<iostream>
using namespace std;

int main(){
    int arr[]={3,-2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=3;
    int sum=0;
    int ans=INT16_MAX;
    int number;
    cin>>number;

    for(int i=0;i<n;i++){
        if(i<r){ 
        sum=sum+arr[i];
        ans=min(ans,sum);
        
        }
    }
    cout<<ans;
    return 0;
}