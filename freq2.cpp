#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    string word;
    unordered_map<string,int>freq;

    for(char c:s){
        if(c ==' '){
            freq[word]++;
            word="";
        }else{
            word=word+c;
        }
    }
    freq[word]++;
    
    for(auto it:freq){
        cout<<it.first<<"--"<<it.second<<endl;
    }
    return 0;
}