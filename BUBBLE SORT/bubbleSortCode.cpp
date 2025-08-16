#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }
    
    //Bubble sort
    // for(int i=0; i<n-1; i++){//n-1 passes
    //     //traverse
    //     for(int j=0; j<n-1-i; j++){
    //         if(arr[j]>arr[j+1]){
    //             // int temp=arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    //bubble sort optimized

    for(int i=0; i<n-1; i++){//n-1 passes
        //traverse
        bool flag=true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}