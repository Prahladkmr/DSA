#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    int target=8;
    int i=0,j=n-1;
    while(i<m && j>=0){
        if(arr[i][j]==target){
            cout<<true;
            break;
        }
        else if(arr[i][j]>target) j--;
        else i++;
    }
}