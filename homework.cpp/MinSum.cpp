#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={1,4,2,0,7,5};
    int n=6;
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1&& arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //stor the sorted array into integer
    int first=0;
    for(int i=0; i<n; i++){
        first*=10;
        first+=arr[i];
    }
    //second min element we need to change sorted array
    for(int i=n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int second=0;
    for(int i=0; i<n; i++){
        second*=10;
        second+=arr[i];
    }
    cout<<"the minimum two sum is "<<first+second<<endl;
}