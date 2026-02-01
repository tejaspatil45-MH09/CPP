#include<iostream>
using namespace std;

void recur(int num,int sum){
    if(num<1){
        cout<<sum;
        return;
    }

    recur(num-1,sum+num);
}


int main(){
int sum=0;
int num;
cin>>num;
recur(num,sum);
}