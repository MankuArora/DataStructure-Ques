#include<iostream>
using namespace std;
class StackDynamic{
    int *stack;
    int top;
    int Size;
    public:
    StackDynamic(){
        stack=new int[5];
        top=-1;
        Size=5;
    }
    void push(){
        int val;
        cin>>val;
        if(top>=Size-1){
            int *newstack=new int[Size*2];
            for(int i=0;i<Size;i++){
                newstack[i]=stack[i];
            }
            delete []stack;
            stack=newstack;
            Size*=2;
        }
        top++;
        stack[top]=val;
    }
    void Display(){
        if(top>=0){
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
        }
        else{
            cout<<"Stack Is Empty";
        }
    }
};
int main(){
    StackDynamic f1;
    f1.push();
    f1.push();
    f1.push();
    f1.push();
    f1.push();
    f1.push();
    f1.Display();
}