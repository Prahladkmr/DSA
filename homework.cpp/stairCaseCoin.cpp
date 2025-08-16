#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int temp=0;
    for(int i=0; i<n; i++){
        if(s<n){
            s+=i;
            temp=i;
            
        }
    }
    cout<<temp-1;
}