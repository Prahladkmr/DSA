#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int>&a,vector<int>&b){
    int c=0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
         c+=a.size()-i;
         j++;
        }
        else i++;
    }
    return c;
}
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
    int n1=n/2,n2=n-n1;
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
    //count the inversion
    count+=inversion(a,b);
    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    vector<int>a={5,1,8,2,3};
    int n=a.size();
    // int count=0;
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i]>a[j]) count++;
    //     }
    // }
    // cout<<count;
    mergesort(a);
    cout<<count;
}