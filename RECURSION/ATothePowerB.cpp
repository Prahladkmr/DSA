#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
     return a*power(a,b-1);
}
int main(){
    // int n;
    // cout<<"enter the no:";
    // cin>>n;
    cout<<power(2,3);
}