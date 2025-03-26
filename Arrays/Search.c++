#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter The No:";
    cin>>ele;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            index=i;
        }
    }
    if(index==-1){
        cout<<"Not Found";
    }
    else{
        cout<<index;
    }
}