#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,5};
    int n=6;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]==arr[j]){
    //             cout<<arr[j];
    //             break;
    //         }
    //     }
    // }
    int lo=0,hi=n-1;
    bool flag=true;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid){
            if(arr[mid-1]==arr[mid]){
                cout<<mid;
                break;
            }
            else hi=mid-1;
        }
        else lo=mid+1;
    }
     
}