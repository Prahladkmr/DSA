#include<iostream>
#include<algorithm>
using namespace std;
int hcf(int a,int b){
    // for(int i=min(a,b); i>=2; i--){
    //     if(a%i==0 && b%i==0) return i;
    // }
    // return 1;
    if(a==0) return b;
    else return hcf(b%a,a);
}
int main(){
    int a=24;
    int b=25;
    cout<<hcf(a,b);
}