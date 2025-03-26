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

Node* Input(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
    cin>>data;
}
return head;
}

Node* Insert(int data,Node *head,int i){
    Node *temp=head;
    int count=0;
    Node *newNode=new Node(data);
    if(i==0){
        newNode->next=head;
        head=newNode;
    }
    while(temp != NULL && count<=i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        Node *a=temp->next;
        temp->next=newNode;
        newNode->next=a;
        return head;
    }
    
}

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node *head=Input();
    print(head);
    Node *newHead=Insert(100,head,2);
    print(newHead);
}