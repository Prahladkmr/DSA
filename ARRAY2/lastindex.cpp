#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int x=6;
    int idx=-1;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x) idx=i;
    // }
    for(int i=v.size(); i>=0; i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
}