#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    //two pass solution
    int noz=0;
    int noo=0;
    int notw=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
}
void sort02(vector<int>&v){
    //one pass solution
    int lo=0,mid=0, hi=v.size()-1;
    while(mid<=hi){
         if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
         }
         if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
         }
         if(v[mid]==1){
            mid++;
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