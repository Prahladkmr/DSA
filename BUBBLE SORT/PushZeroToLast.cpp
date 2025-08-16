#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,0,2,7,5,0,6,4,0,};
    for(int i=0; i<8; i++){
        for(int j=0; j<8-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
}