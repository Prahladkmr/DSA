#include<iostream>
using namespace std;
int stairpath(int n){
     if(n==1||n==2) return n;
     return stairpath(n-1) + stairpath(n-2);
}
int main(){
     int n;
     cout<<"enter the no:";
     cin>>n;
    cout<<stairpath(n);
}