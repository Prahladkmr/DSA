#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"a=";
    cin>>a;
    int b;
    cout<<"b=";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swaping"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b;
}