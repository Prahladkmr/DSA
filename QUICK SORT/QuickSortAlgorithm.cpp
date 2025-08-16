#include<iostream>
#include<algorithm>
using namespace std;
int partion(int arr[],int si,int ei){
    int count=0;
    int pivot=arr[(si+ei)/2];
    for(int i=si+1; i<=ei; i++){
        //if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivot) count++;
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
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
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partion(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
    
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}