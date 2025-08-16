#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"even number is"<<endl;
    for(int i=1; i<=n; i++){
        if(i%2==0) cout<<i<<endl;
    }
}