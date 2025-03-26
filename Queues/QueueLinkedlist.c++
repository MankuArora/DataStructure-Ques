#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Queue{
    Node *head;
    Node *tail;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
        void Enqueue(int data){
            Node *newnode=new Node(data);
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=tail->next;
            }
        }

        void Dequeue(){
            cout<<"Poped Value:"<<head->data<<endl;
            head=head->next;
        }
};
int main(){
    Queue q1;
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Dequeue();
    q1.Dequeue();
}