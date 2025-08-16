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
    cout<<"enter second matrix\n";
    int p;
    cout<<"enter no. of rows:";
    cin>>p;
    int q;
    cout<<"enter no. of column:";
    cin>>q;
    int b[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
    if(m==p){
    int res[n][q];
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
              res[i][j]=0;
              for(int k=0; k<m; k++){
                res[i][j]+=a[i][k]* b[k][j];
              }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<" condition not match";
    

}