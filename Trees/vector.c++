#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.at(0)<<endl;
    cout<<v[1]<<endl;
    cout<<v.at(2)<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}