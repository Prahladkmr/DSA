#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no. of rows:";
    cin>>m;
    int n;
    cout<<"enter no. of column:";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
     //spiral matrix
     int minr=0,maxr=m-1,minc=0,maxc=n-1;
     int tne=n*m;
     int count=0;
     while(count<tne){
        //print min row
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        //count++;
        minr++;
        //print max column
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //print max row
        for(int j=maxc; j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //print min row
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
     }
}