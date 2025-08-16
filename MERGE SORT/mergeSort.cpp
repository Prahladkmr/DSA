#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>a,vector<int>b,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k]=a[i];
            i++;
        }
        else {
            res[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<a.size()){
        res[k]=a[i];
        k++;
        i++;
    }
    while(j<b.size()){
        res[k]=b[j];
        k++;
        j++;
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0; i<n1; i++){
        a[i]=v[i];
    }
    for(int i=0; i<n2; i++){
        b[i]=v[i+n1];
    }
    //magic aka recursion
    mergesort(a);
    mergesort(b);
    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    vector<int>a={8,5,4,1,0};
    int n=a.size();
    mergesort(a);
    vector<int>b={16,13,8,10,3,2};
    int m=b.size();
    mergesort(b);
    vector<int>res(n+m);
    merge(a,b,res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}