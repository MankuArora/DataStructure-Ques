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
TreesNode<int> *Input(){
    int rootdata;
    cout<<"Enter Data:";
    cin>>rootdata;
    TreesNode<int> *root=new TreesNode<int>(rootdata);

    int n;
    cout<<"Enter The No Of Child:";
    cin>>n;
    for(int i=0;i<n;i++){
        TreesNode<int> *child=Input();
        root->children.push_back(child);
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
    TreesNode<int> *root=Input();
    print(root);
}