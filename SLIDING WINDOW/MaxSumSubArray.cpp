#include<bits/stdc++.h>
using namespace std; 
int main(){
    int arr[]={7,5,3,8,9,1,2,6,4};
    int n=9;
    int k=4;
    int prevsum=0;
    for(int i=0; i<k; i++){
        prevsum+=arr[i];
    }
    int maxsum=prevsum;
    int i=1,j=k;
    while(j<n){
        int currsum=prevsum+arr[j]-arr[i-1];
        maxsum=max(maxsum,currsum);
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<maxsum;
 
}