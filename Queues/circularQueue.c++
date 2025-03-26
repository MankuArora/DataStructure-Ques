#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int Queue[5];
int n=5;
void enqueue(){
    int val;
    cout<<"Enter The Value: ";
    cin>>val;
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
        Queue[0]=val;
    }
    else if(((rear+1)%n)==front){
        cout<<"Queue If Full"<<endl;
    }
    else{
        rear=(rear+1)%n;
        Queue[rear]=val;
    }
}
void dequeue(){
    if(rear==-1){
        cout<<"Queue IS Empty"<<endl;
    }
    else{
        cout<<"Popped Element:"<<Queue[front]<<endl;
        front=(front+1)%n;
    }
}
void display(){
    cout<<Queue[front]<<endl;
    front=(front+1)%n;
}
int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    enqueue();
    display();
    display();
    display();
    display();
}