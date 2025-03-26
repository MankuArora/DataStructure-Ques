#include<iostream>
#include<queue>
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
    cout<<"Enter The Data:";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int>*>pending;
    pending.push(root);
    while(pending.size()!=0){
        BinaryTreeNode<int> *front=pending.front();
        pending.pop();
        int leftchild;
        cout<<"Enter The Left Child of "<<front->data<<endl;
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(leftchild);
            front->left=child;
            pending.push(child);
        }
        int rightchild;
        cout<<"Enter The Right Child Of "<<front->data<<endl;
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(rightchild);
            front->right=child;
            pending.push(child);
        }
    }
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