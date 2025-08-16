 #include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void printsubset(int arr[],int n,int idx,vector<int>v,int k){
     if(idx==n){
        if(v.size()==k){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
     }
        return;
    }
     printsubset(arr,n,idx+1,v,k);
     v.push_back(arr[idx]);
     printsubset(arr,n,idx+1,v,k);

}
int main(){
     int arr[]={1,2,3,4};
     vector<int>v;
     int n=4;
     int k=3;
     printsubset(arr,n,0,v,k);
}