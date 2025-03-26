#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename t>
class TreesNode{
    public:
    t data;
    vector<TreesNode<t>*> children;

    TreesNode(t data){
        this->data=data;
    }
};
TreesNode<int> *input(){
    int rootdata;
    cout<<"Enter The Root Data:";
    cin>>rootdata;

    TreesNode<int> *root=new TreesNode<int>(rootdata);

    queue<TreesNode<int>*> pendingNode;

    pendingNode.push(root);
    while(pendingNode.size() != 0){
        TreesNode<int>* front=pendingNode.front();
        pendingNode.pop();
        cout<<"Enter Num Of Children Of "<<front->data<<endl;
        int numchild;
        cin>>numchild;
        for(int i=0;i<numchild;i++){
            int childdata;
            cout<<"Enter "<<i<<"th Child Of "<<front->data<<endl;
            cin>>childdata;
            TreesNode<int> *child=new TreesNode<int>(childdata);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}
void print(TreesNode<int> *root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }

}
int main(){
    TreesNode<int> *root=input();
    print(root);
    
}