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
Node *Input(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
        tail->next=newnode;
        tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
void deletion(Node *head,int i){
    int count=0;
    Node *temp=head;
    while(count!=i-1){
        temp=temp->next;
        count++;
    }
    Node *a=temp->next;
    Node *b=a->next;
    temp->next=b;
    delete a;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=Input();
    print(head);
    int a;
    cin>>a;
    deletion(head,a);
    print (head);
}