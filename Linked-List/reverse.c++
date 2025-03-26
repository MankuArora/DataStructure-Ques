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

Node* reverse(Node* head) {
    Node* tmp,*newhead = NULL;
    while(head!=NULL){
        tmp = head; //10 20
        head = head->next;//20 30
        tmp->next = newhead;//null 10
        newhead = tmp;//20 10
    }
    return newhead;
    
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
    Node*newHead=reverse(head);
    print(newHead);
}