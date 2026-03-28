#include<iostream>
using namespace std;

class stack {
    int* arr;
    int top;int size;int no;
    
    public:
    stack(){
        cout<<"enter the size :"<<endl;
        cin>>size;
        arr= new int[size];
        top=-1;
    }

    void insertion();
    void deletion();
    void display();
    void peek();

    ~stack(){
        delete[] arr;
    }
};

void stack::insertion(){
if(top==size-1){
    cout<<"cant insert an element :"<<endl;
    return;
}

cout<<"enter an element :"<<endl;
cin>>no;
arr[++top]=no;
}

void stack::deletion(){
    if(top==-1){
        cout<<"stack is empty ";
        return;
    }

    cout<<"deleted element is "<<arr[top];
    top--;
}

void stack::display(){
    if(top==-1){
        cout<<"stack is empty";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void stack::peek(){
    if(top==-1){
        cout<<"stack is empty "<<endl;
        return;
    }
    cout<<"peek element is "<<arr[top];
    cout<<endl;
}

int main(){
    stack s;
    int ch;
    while(true){
      cout<<"1.insertion 2.deletion 3.peek 4.display 5.exit:"<<endl;
      cin>>ch;
      switch(ch){
      case 1:s.insertion();
      break;
      case 2:s.deletion();
      break;
      case 3:s.peek();
      break;
      case 4:s.display();
      break;
      case 5:exit(0);
      break;
      default:
      cout<<"invalid input"<<endl;
      }
    }

    return 0;
}