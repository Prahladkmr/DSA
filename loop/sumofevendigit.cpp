#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"enter a number:";
     cin>>n;
     int r,s=0;
     while(n>0){
        r=n%10;
        if(r%2==0) s+=r;
        n/=10;
     }
     cout<<"sum of even digit is "<<s;
    
}