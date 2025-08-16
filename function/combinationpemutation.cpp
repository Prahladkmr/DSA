#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=1; i<=x; i++){
        a*=i;
    }
    return a;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;
    int ncr= combination(n,r);
    cout<<ncr;
}