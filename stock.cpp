#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int display(int arr[],int n){
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){ 
             if((arr[j]-arr[i])>maxi){
                maxi=arr[j]-arr[i];
             }
            }
        }
        return maxi;
    }
};

int main(){

    int arr[]={1, 3, 6, 9, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    Solution s;
    cout<<s.display(arr,n);
    return 0;
}