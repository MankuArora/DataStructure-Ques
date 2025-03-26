#include<iostream>
using namespace std;
class StackBasic{
    int *stack;
    int top;
    int Size;
    public:
    StackBasic(int a){
        stack=new int[a];
        top=-1;
        Size=a;
    }
    void push(){
        int val;
        cin>>val;
        if(top>=Size-1){
            cout<<"Stack OverFlowed";
        }
        else{
            top++;
            stack[top]=val;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Under Flowed";
        }
        else{
            cout<<stack[top]<<" ";
            top--;
        }
    }
    void display(){
        if(top>=0){
            for(int i=top;i>=0;i--){
                cout<<endl<<stack[i]<<" ";
            }
        }
        else{
                cout<<"Stack Is Empty";
            }
    }
};
int main(){
    StackBasic f1(5);
    f1.push();
    f1.push();
    f1.push();
    f1.pop();
    f1.pop();
    f1.display();
}