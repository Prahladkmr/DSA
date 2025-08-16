#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printsubArray(int arr[],int n,int idx,vector<int>v){
    if(idx==n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        return;
    }
     printsubArray(arr,n,idx+1,v);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        printsubArray(arr,n,idx+1,v);
    }
}
int main(){
    int arr[]={1,2,3};
    vector<int>v;
    int n=3;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i;k<=j; k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    printsubArray(arr,n,0,v);
}