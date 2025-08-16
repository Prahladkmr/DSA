#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int r, sum=0;
    while(n>0){
        r=n%10;
        sum*=10;
        sum+=r;
        n/=10;
    }
    cout<<"reverse of a number is "<<sum;
     
    }