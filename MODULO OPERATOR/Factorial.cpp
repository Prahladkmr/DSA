#include<bits/stdc++.h>
using namespace std; 
int main(){
     int n=25;
     int MOD=1000000007;
     long long int fact=1;
     long long int temp=1;
     for(int i=2; i<=n; i++){
         fact=((i%MOD)*(temp)%MOD)%MOD;
         temp=fact;
         cout<<fact<<endl;
     }
 
}