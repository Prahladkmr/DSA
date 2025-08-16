#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int s=0;
    int a=n;
    while(n>0){
        n/=10;
        s++;
    }
    if(a==0) cout<<1;
    else 
    cout<<"no. of digit "<<s;
}