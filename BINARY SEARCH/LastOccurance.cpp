#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,4,4,4,4,5};
    int n=11;
    int target=9;
    int lo=0,hi=n-1;
    bool flag=true;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target) lo=mid+1;
            else{
                cout<<mid;
                flag = false;
                break;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==true){
        cout<<-1;
    }
}