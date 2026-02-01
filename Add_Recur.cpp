#include<iostream>
using namespace std;

int recur(int num){
    if(num==0){
        return 0 ;
    }

    return num+ recur(num-1);
}

int main(){
 int num;
 cin>>num;
 cout<<recur(num);
 return 0;
}
