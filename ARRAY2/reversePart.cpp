#include<iostream>
#include<vector>
using namespace std;
void display(int i,int j,vector<int>&v){
    for(int i=0, j=4; i<=j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    display(0,4,v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}