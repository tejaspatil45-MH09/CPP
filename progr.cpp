#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void pushZerosToEnd(vector<int>& arr) {

        /*for(int i=0;i<n-1;i++){
            for(int j=i;j<n-1;j++){
                if(arr[j]==0){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(auto i:arr){
            cout<<i;
        }
       */ 
     int l = 0, r = 0;
        int n = arr.size();

        while (r < n) {
            if (arr[r] != 0) {
                swap(arr[l], arr[r]);
                l++;
            }
            r++;
        }

        for (auto x : arr) {
            cout << x << " ";
        }
    }

};

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
       arr.push_back(num);
    }
    solution s;
    s.pushZerosToEnd(arr);
    return 0;
}