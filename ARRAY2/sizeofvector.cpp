#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3];
}