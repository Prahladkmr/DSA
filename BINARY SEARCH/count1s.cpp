#include<iostream>
using namespace std;
int main(){
     int arr[]={0,0,0,0,1,1,1};
     int n=7;
     int lo=0,hi=n-1;
     int cnt=0;
     while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==1){
            if(mid==0){
                cnt=mid;
                break;
            }
           else if(arr[mid-1]==1) hi=mid-1;
            else {
                cnt=mid;
                break;
            }
        }
        else if(arr[mid]<1) lo=mid+1;
        else hi=mid-1;
     }
     cout<<"total no. of ones "<<n-cnt;
}