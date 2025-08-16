#include<iostream>
#include<vector>
using namespace std;
void display(int a, int b, vector<int>&x){
    for(int i=a,j=b; i<=j; i++,j--){
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}
int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter no. of time rotate vector: ";
    cin>>k;
    display(0,n-k-1,v);
    display(n-k,n-1,v);
    display(0,n-1,v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}