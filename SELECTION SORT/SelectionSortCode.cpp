#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //selection sort
    for(int i=0; i<n-1; i++){
        int min=INT_MAX;
        int mindx=-1;
        //minimum element calculation
         for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
         }
         swap(arr[i],arr[mindx]);
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }

}