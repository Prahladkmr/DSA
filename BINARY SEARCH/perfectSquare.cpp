#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter tne number:";
     cin>>n;
     bool flag=false;
     int lo=0,hi=n;
     while(lo<=hi){
        int mid=(lo+hi)/2;
        if(mid*mid==n){
            flag=true;
            cout<<"number is perfect square";
            break;
        }
        else if(mid*mid>n) hi=mid-1;
        else lo=mid+1;

     }
     if(flag==false) cout<<"number is not perfect square";
}