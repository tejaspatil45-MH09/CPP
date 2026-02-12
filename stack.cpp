#include<bits/stdc++.h>
using namespace std;
int arr[10];
int top=-1;
class SStack{
    public:
   
       void push();
       void pop();
       void  peek();
       void display();  
};

void SStack::push(){
    if(top==9){
        cout<<"stack is full";
    }else{
        int num;
        cout<<"enter a number : "<<endl;
        cin>>num;
        arr[++top]=num;
    }
}

void SStack::pop(){
    if(top==-1){
        cout<<"stack is empty :"<<endl;
    }
    else{ 
        cout<<"popped element is "<<arr[top--];
}
}

void SStack::peek(){
    if(top==-1)cout<<"stack is empty";
    else{
        cout<<"top element is :"<<" "<<arr[top];
    }
}

void SStack::display(){
    if(top==-1)cout<<"stack is empty";
    else{
        cout<<"array elements are :";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
SStack s;
int ch=1;
while(ch!=0){
 cout<<"enter an choice :"<<endl;
cout<<"\n 1 for push"<<endl;
cout<<"\n 2 for pop"<<endl;
cout<<"\n 3 for peek"<<endl;
cout<<"\n 4 for display"<<endl;
    int ch;
    cin>>ch;
     switch(ch){ 
     case 1:s.push();
     break;
     case 2:s.pop();
     break;
     case 3:s.peek();
     break;
     case 4:s.display();
     break;
     default:"choise correct option";
     }
    
}
return 0;
}