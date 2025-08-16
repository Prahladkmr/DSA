#include<iostream>
#include<string>
#include<vector>
using namespace std;
void combination(int arr[],int n,int target,vector<int>v,int idx){
    if(target==0){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx; i<n; i++){
        v.push_back(arr[i]);
        combination(arr,n,target-arr[i],v,i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    vector<int>v;
    combination(arr,3,8,v,0);
}