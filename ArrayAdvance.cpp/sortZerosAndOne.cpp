#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}
void sort02(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0 && i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
int main(){
     int n;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //sort01(v);
    sort02(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}