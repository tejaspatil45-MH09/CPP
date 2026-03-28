#include<iostream>
using namespace std;

class queue{
    private:
    int no,size,front,rear;
    int* arr;

    public:
    queue(){
        front=rear=-1;
        cout<<"enter size of array :"<<endl;
        cin>>size;
        arr=new int[size];
    }

    void insertion();
    void deletion();
    void display();

    ~queue(){
        delete[] arr;
    }
};

void queue::insertion(){
    if(front==(rear+1)%size){
        cout<<"queue is full "<<endl;
        return;
    }
    else{
        rear=(rear+1)%size;
        cout<<"enter a number : \t";
        cin>>no;
        arr[rear]=no;

        if(front==-1)front=0;
    }
}

void queue::deletion(){
    if(front==-1){
        cout<<"queue is empty :"<<endl;
        return;
    }
    else{
        cout<<"deleted element is "<<arr[front];
        
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%size;
        }
    }
}

void queue::display(){
    if(front==-1){
        cout<<"queue is empty "<<endl;
        return;
    }
    else{
        int i=front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==rear)break;
            i=(i+1)%size;
        }
        cout<<endl;
    }
}

int main(){
    queue q;
    int ch;
    while(true){
        cout<<"1.insertion 2.deletion 3.display 4.exit "<<endl;
        cin>>ch;

        switch(ch){
            case 1:q.insertion();
            break;
            case 2:q.deletion();
            break;
            case 3:q.display();
            break;
            case 4:return 0;
            default:cout<<"invalid input "<<endl;
        }
    }
}