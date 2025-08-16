/*:Given an array, arr[] containing ‘n’ integers, the
task is to find an integer (say K) such that after
replacing each and every index of the array by |ai– K|
where ( i ∈ [1, n]), results in a sorted array. If no such
integer exists that satisfies the above condition then
return -1. Find the range of K'*/
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a>b) return b;
    else return a;
}
int main(){
    int arr[]={5,3,10,3};
    int n=4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin=(float)INT_MIN;
    float kmax=(float)INT_MAX;
    bool flag=true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else kmax=min(kmax,(arr[i]+arr[i+1])/2.0);
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"there is only one value of k "<<kmin;
        }
        else cout<<-1;
    }
    else cout<<"range of k is ["<<kmin<<","<<(int)kmax<<"]";
}
