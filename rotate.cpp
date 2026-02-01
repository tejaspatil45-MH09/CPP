#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void rotatearr(vector<int> &arr ,int d){
        int n=arr.size();
        while(d>0){
            int x=arr[0];
            for(int i=1;i<n;i++){
             arr[i-1]=arr[i];
            }
            arr[n-1]=x;
            d--;
        }
        for(auto i:arr){
            cout<<i<<" ";
        }
    }
};

int main(){
 vector<int> arr;
int n, num;
cin >> n;

for(int i = 0; i < n; i++){
    cin >> num;
    arr.push_back(num);
}

int d;
cout<<"enter d:";
cin>>d;

solution s1;
s1.rotatearr(arr,d);

   return 0;
}