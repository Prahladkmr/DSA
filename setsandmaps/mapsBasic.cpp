#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="prahlad";
    p1.second=78;
    m.insert(p1);
    m["amit"]=16;
    m["ankit"]=87;
    for(auto p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}