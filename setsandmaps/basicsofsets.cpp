#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(11);
    s.insert(2);
    s.insert(7);
    s.insert(1);

    //check ele present or not
    int target=4;
    if(s.find(target)!= s.end()){
        cout<<"exists"<<endl;
    }
    else cout<<"not exists"<<endl;
    cout<<s.size()<<endl;
    for( int ele: s){
        cout<<ele<<" ";

    }
}