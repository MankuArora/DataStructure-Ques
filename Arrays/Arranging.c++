#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value=1;
    int s[n];
    int e[n];
    for(int i=0;i<n;i++){
        s[0]=value;
        value++;
        e[n-1]=value;
        value++;
        s[n++];
        e[n--];
    }
    for(int i=0;i<n/2;i++){
        cout<<s[i]<<" ";
    }
    for(int i=n/2;i<n;i++){
        cout<<e[i]<<" ";
    }

}