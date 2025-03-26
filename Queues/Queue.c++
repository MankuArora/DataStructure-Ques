#include<iostream>
using namespace std;
class Queues{
    int *Queue;
    int Size;
    int front;
    int rear;
    public:
        Queues(){
        Queue=new int[5];
        Size=5;
        front=-1;
        rear=-1;
    }
    void Enqueue(int val){
        if(rear>=Size-1){
            int *newQueue=new int[Size*2];
            for(int i=0;i<Size;i++){
                newQueue[i]=Queue[i];
            }
            delete [] Queue;
            Queue=newQueue;
            Size=Size*2;
        }
        else{
        if(front==-1){
            front=0;
        }
            rear++;
            Queue[rear]=val;
        }
    }
    void Dequeue(){
        if(front&&rear==-1){
            cout<<"Queue Underflowed"<<endl;
        }
        else{
            cout<<"Value Poped: "<<Queue[front]<<endl;
            front++;
        }
    }
    void top(){
        if(front&&rear==-1){
            cout<<"Queue Is Empty"<<endl;
        }
        else{
            cout<<Queue[front]<<endl;
        }
    }
};
int main(){
    Queues q1;
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    q1.Enqueue(50);
    q1.Enqueue(60);
    q1.Enqueue(70);
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.top();
}