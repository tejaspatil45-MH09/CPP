#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue{
    int size,no;
    int front,rear;
    int* arr;

    public:
    Queue(){
        cout<<"enter size of array :"<<endl;
        cin>>size;
        front=rear=-1;
        arr=new int[size];
    }

    void insert();
    void deletion();
    void display();

    ~Queue(){
        delete[] arr;
    }
};

void Queue::insert(){
    if(rear==size-1)cout<<"queue is full ";
    else{
        cout<<"enter a number :"<<endl;
        cin>>no;
        arr[++rear]=no;

        if(front==-1)front=0;
    }
}

void Queue::deletion(){
    if(front==-1){cout<<"queue is empty";}
    else{
        cout<<"deleted element is "<<arr[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}

void Queue::display(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
int ch=1;
Queue q;
cout<<"1 :insert 2:delete 3:display 4:exit"<<endl;
while(ch!=0){
    cout<<"enter choice :";
    cin>>ch;
    switch (ch)
    {
    case 1:q.insert();
        break;
    case 2:q.deletion();
    break;
    case 3:q.display();
    break;    
    case 4:exit(0);
    default:cout<<"invalid number :"<<endl;
    break;
    }
}
return 0;
}