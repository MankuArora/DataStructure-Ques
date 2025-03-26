#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int Size=5;
int Queue[5];
void Enqueue(){
    int val;
    if(rear==Size-1){
        cout<<"Queue Overflowed"<<endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        cout<<"Enter The Value:";
        cin>>val;
        rear++;
        Queue[rear]=val;
    }
}
void Dequeue(){
    if(front&&rear==-1){
        cout<<"Queue Underflowed"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"Pop"<<Queue[front]<<endl;
        front++;
    }
}
void Display(){
    if(front==-1){
        cout<<"Queue Is Empty"<<endl;
    }
    else{
        cout<<"Queue Content:"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;
    int choice;
    do{
        cout<<"Enter The Choice:";
        cin>>choice;
        switch(choice){
            case 1:
            Enqueue();
            break;

            case 2:
            Dequeue();
            break;

            case 3:
            Display();
            break;

            case 4:
            cout<<"Exit";
            break;

            default:
            cout<<"Invalid Choice";
        }
    }while(choice!=4);
}