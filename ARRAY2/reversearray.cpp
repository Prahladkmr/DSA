#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"enter size of array:";
     cin>>n;
     cout<<"enter array element"<<endl;
     vector<int>v(n);
     for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
     }
     vector<int> v1(v.size());
     for(int i=0; i<v.size(); i++){
         v1[i]=v[v.size()-1-i];
     }
     for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
     }
     
}