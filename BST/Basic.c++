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
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2=new BinaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;
    print(root);
}