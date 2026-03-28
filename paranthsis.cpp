#include<bits/stdc++.h>
using namespace std;

void paranthsis(char s[] ){
    int top=-1;
    char stack[100];
    bool isBoolean=true;

    for(int i=0;s[i]!='\0';i++){
      char ch=s[i];
      if(ch=='{'||ch=='('||ch=='['){
        stack[++top]=ch;
      }
      else if(ch=='}'||ch==']'||ch==')'){
        if(top==-1) {
            cout<<"not balanced"<<endl;
            return;
        }
        char open=stack[top--];
        if((ch=='}'&& open!='{')||
           (ch==']' && open != '[')||
           (ch==')' && open != '(')
        ){
            isBoolean=false;
        }
    
      }
    }
    if(top==-1){
        isBoolean=false;

    }
    if(isBoolean){
        cout<<"balanced";
    }else{
        cout<<"not balanced";
    }
}


int main(){
    char s[]={"{[(()])}"};
    paranthsis(s);
}