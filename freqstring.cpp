#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin,s);


unordered_map<string,int>freq;
string word;
stringstream ss(s);
    while(ss>>word){
        freq[word]++;
    }
string wor;
cout<<"enter the word you want to check :";
cin>>wor;    
for(auto i:freq){
    if(i.first==wor){
        cout<<"freq :"<<i.second;
    }
}
return 0;

}