#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        //1-2+3-4+5-6+7.....nth
        if(i%2!=0) sum+=i;
        else sum-=i;
    }
    cout<<sum;
    }