#include<iostream>
#include<queue>
using namespace std;
template<typename t>
class BinaryNodeTree{
    public:
    t data;
    BinaryNodeTree *left;
    BinaryNodeTree *right;

    BinaryNodeTree(t data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
BinaryNodeTree<int> *input(){
    int rootdata;
    cout<<"Enter The Root Data:";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryNodeTree<int> *root=new BinaryNodeTree<int>(rootdata);
    queue<BinaryNodeTree<int>*>pending;

    pending.push(root);
    while(pending.size()!=0){
        BinaryNodeTree<int> *front=pending.front();
        pending.pop();

        int leftchild;
        cout<<"Enter The Left Child of "<<front->data<<endl;
        cin>>leftchild;
        if(leftchild!=-1){
        BinaryNodeTree<int> *child=new BinaryNodeTree<int>(leftchild);
        front->left=child;
        pending.push(child);
        }
        
        int rightchild;
        cout<<"Enter The Right Child Of "<<front->data<<endl;
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryNodeTree<int> *child=new BinaryNodeTree<int>(rightchild);
            front->right=child;
            pending.push(child);
        }
    }
    return root;
}
// void print(BinaryNodeTree<int> *root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<":";
//     if(root->left!=NULL){
//         cout<<"L"<<root->left->data;
//     }
//     if(root->right!=NULL){
//         cout<<"R"<<root->right->data;
//     }
//     cout<<endl;
//     print(root->left);
//     print(root->right);
// }
int numNode(BinaryNodeTree<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+numNode(root->left)+numNode(root->right);
}
void inorder(BinaryNodeTree<int> *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    BinaryNodeTree<int> *root=input();
    // print(root);
    int num=numNode(root);
    cout<<"Num:"<<num<<endl;
    inorder(root);
}