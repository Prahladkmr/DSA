#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++){
         //1, 2,4,8,16,32,....,nth
         cout<<a<<" ";
         a*=2;
    }
}