#include<iostream>
#include<algorithm>
using namespace std;
int partion(int arr[],int si,int ei){
    int count=0;
    int pivot=arr[(si+ei)/2];
    for(int i=si; i<=ei; i++){
        if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivot) count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si,j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        else if(arr[i]>pivot && arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int  kthsmallest(int arr[],int si,int ei,int k){
    int pi=partion(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return  kthsmallest(arr,si,pi-1,k);
     
    
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<kthsmallest(arr,0,n-1,k);
     
}