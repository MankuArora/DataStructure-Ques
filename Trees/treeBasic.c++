#include<iostream>
#include<vector>
using namespace std;
template<typename t>
class TreesNode{
    public:
    t data;
    vector<TreesNode<t>*>children;

    TreesNode(t data){
        this->data=data;
    }
};
void print(TreesNode<int> *root){
    if(root==NULL){
        return;
    }
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
    TreesNode<int>* root=new TreesNode<int>(1);
    TreesNode<int>* node1=new TreesNode<int>(2);
    TreesNode<int> *node2=new TreesNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    print(root);
}