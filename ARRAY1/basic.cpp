#include<iostream>
using namespace std;
int main(){
    // int arr[7]={1,2,3,4,5,6,7};
    // for(int i=0; i<7; i++){
    //     cout<<arr[i]<<endl;
    // }
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}