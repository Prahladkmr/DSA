#include<iostream>
using namespace std;
int power(int a,int b){
    int ans;
    if(b==1) return a;
    if(b%2==0){
        ans=power(a,b/2);
        return ans * ans ;
    }
    else {
        ans=power(a,b/2);
        return a*ans * ans ;
    }
}
int main(){
    // int n;
    // cout<<"enter the no:";
    // cin>>n;
    cout<<power(2,6);
}