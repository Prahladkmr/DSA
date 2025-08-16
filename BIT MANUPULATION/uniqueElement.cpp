#include<bits/stdc++.h>
using namespace std; 
int main(){
    int arr[]={4,4,1,3,2,3,2,1,5};
    int n=9;
    int res=0;
    for(int i=0; i<n; i++){
        res=res^arr[i];
    }
    cout<<res;
 
}