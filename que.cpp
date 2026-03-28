#include<iostream>
using namespace std;

class Priority{
    int no,size,front,rear;
    int* arr;

    public:
    Priority(){
        front=rear=-1;
        cout<<"enter a size :"<<endl;
        cin>>size;
        arr=new int[size];
    }

    void insertion();
    void deletion();
    void display();
    void check(int n);

    ~Priority(){
        delete[] arr;
    }
};

void Priority::insertion(){
    if(rear==size-1){
        cout<<"queue is full :"<<endl;
        return;
    }
    else{
        cout<<"enter a no :"<<endl;
        cin>>no;
    if(front==-1 && rear==-1){
        front++;
        rear++;
       arr[rear]=no;
    }else{
        check(no);
        rear++;
    }

    }
}

void Priority::check(int n){
    for(int i=front;i<=rear;i++){
        if(no>arr[i]){
            for(int j=rear;j>=i;j--){
                arr[j+1]=arr[j];
            }
            arr[i]=no;
            return;
        }
    }
    arr[rear+1]=no;
}

void Priority::deletion(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
        return;
    }else{
        cout<<"deleted element is "<<arr[front]<<endl;
        front++;

        if(front>rear){
            front=rear=-1;
        }
    }
}

void Priority::display(){
    if(front==-1){
        cout<<"arr is empty"<<endl;
        return;
    }else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    Priority p;
    int ch;
    while(true){
        cout<<"1.insertion 2.deletion 3.display 4.exit"<<endl;
        cin>>ch;

        switch(ch){
            case 1:p.insertion();
            break;
            case 2:p.deletion();
            break;
            case 3:p.display();
            break;
            case 4:return 0;
            break;
            default:cout<<"invalid input "<<endl;
            break;
        }
    }
}