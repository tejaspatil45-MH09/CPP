#include<bits/stdc++.h>
using namespace std;

int reverse(int num,int sum){
    if(num==0){
        return sum;
    }
    else{
          int rem=num%10;
        sum=sum*10+rem;
        return reverse(num/10,sum);
    }
}

int main(){
    int num;
    cin>>num;
    int sum=0;
   cout<< reverse(num,sum);
}