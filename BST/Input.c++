#include<iostream>
using namespace std;
template<typename t>
class BinaryTreeNode{
    public:
    t data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(t data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
BinaryTreeNode<int> *input(){
    int rootdata;
    cout<<"Enter The Root Data:";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int> *leftchild=input();
    BinaryTreeNode<int> *rightchild=input();
    root->left=leftchild;
    root->right=rightchild;

    return root;
}
void print(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
int main(){
    BinaryTreeNode<int> *root=input();
    print(root);
}