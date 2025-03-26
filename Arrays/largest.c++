#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No:";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Max=arr[0];
    for(int i=0;i<n;i++){
        if(Max<arr[i]){
            Max=arr[i];
        }
    }
    cout<<"Max:"<<Max;
}