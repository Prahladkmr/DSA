#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target:";
    cin>>target;
    // for(int i=0; i<n; i++){
    //     if(arr[i]>target){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false){
    cout<<"lower bound is "<<arr[hi]<<endl;
    cout<<"upper bound is "<<arr[lo];
    }
}