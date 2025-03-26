#include<iostream>
#include<queue>
#include<vector>
using namespace std;
template<typename t>
class TreeNode{
    public:
    t data;
    vector<TreeNode<t>*>children;

    TreeNode(t data){
        this->data=data;
    }
};
TreeNode<int> *Input(){
    int rootdata;
    cout<<"Root Data:";
    cin>>rootdata;

    TreeNode<int> *root=new TreeNode<int>(rootdata);

    queue<TreeNode<int>*>pending;
    pending.push(root);
    while(pending.size()!=0){
        TreeNode<int> *front=pending.front();
        pending.pop();
        int numchild;
        cout<<"Enter The No Of Child:";
        cin>>numchild;
        for(int i=0;i<numchild;i++){
            int childdata;
            cout<<"Enter The Data:";
            cin>>childdata;
            TreeNode<int> *child= new TreeNode<int>(childdata);
            front->children.push_back(child);
            pending.push(child);
        }
    }
    return root;
}

void print(TreeNode<int> *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    for(int i=0;i<root->children.size();i++){
        print(root->children[i],k-1);
    }
}
int main(){
    TreeNode<int> *root=Input();
    int k;
    cout<<"Enter The Deep:";
    cin>>k;
    print(root,k);
}