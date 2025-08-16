#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int m;
    cout<<"enter no. of column:";
    cin>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}