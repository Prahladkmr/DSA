#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st number:";
    cin>>a;
    int b;
    cout<<"enter 2nd number:";
    cin>>b;
    switch(a>b){
        case 0:
        cout<<"maximum is "<<b;
        break;
        case 1:
        cout<<"maximum is "<<a;
         
    }
}