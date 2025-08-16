 #include<iostream>
 #include<climits>
 #include<algorithm>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(arr[idx]>max) max=arr[idx];
    printmax(arr,n,idx+1,max);
}
int MaxInArray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],MaxInArray(arr,n,idx+1));
}
int main(){
     int arr[]={2,6,4,9,7,2,0};
     int n=sizeof(arr)/sizeof(arr[0]);
     int max=INT_MIN;
    // printmax(arr,n,0,max);
    cout<<MaxInArray(arr,n,0);
}