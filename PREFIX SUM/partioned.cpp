#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //formation of prefix sum
    for(int i=1; i<n; i++){
        arr[i]+=arr[i-1];
    }
    //check if any exist
    bool flag=false;
    for(int i=1; i<n; i++){
         if(arr[i]==arr[n-1]/2){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"it can be partioned";
    else  cout<<"it can not be partioned";

}