#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
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

// void Mid(Node *head){

//     cout<<"hello";
//     Node *temp=head;
//     int count=0;
//     Node *slow=head;
//     Node *fast=head->next;
//     while(temp!=NULL){
//         count+=1;
//     }
//     cout<<count;
    // if(count%2==0){
    //     while(fast->next==NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
    // }
    // else{
    //     while(fast==NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
    // }
    // return slow;

    Node* Merge(Node *head1,Node *head2){
        Node *p1=head1;
        Node *p2=head2;

        Node *dummyNode=new Node(-1);
        Node *p3=dummyNode;

        while(p1!=NULL && p2!=NULL){
            if(p1->data<p2->data){
                p3->next=p1;
                p1=p1->next;
            }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }

        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }

        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }

        return dummyNode->next;
    }


void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head1=Input();
    Node *head2=Input();
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    Node *newNode=Merge(head1,head2);
    print(newNode);
}