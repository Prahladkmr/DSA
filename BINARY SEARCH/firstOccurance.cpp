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
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target) hi=mid-1;
            else{
                 cout<<mid;
                 break;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
}