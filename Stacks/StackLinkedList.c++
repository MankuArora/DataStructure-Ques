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
class Stack{
    Node *head;
    Node *tail;
    public:
    Stack(){
        head=NULL;
        tail=NULL;
    }
    void push(){
        int val;
        cin>>val;
        Node *newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        newnode->next=head;
        head=newnode;
        return;
    }
    void peek(){
        cout<<head->data<<endl;
        head=head->next;
    }
    
};
int main(){
    Stack s1;
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.peek();
    s1.peek();
}