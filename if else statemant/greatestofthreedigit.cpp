#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st number:";
    cin>>a;
    int b;
    cout<<"enter 2nd number:";
    cin>>b;
    int c;
    cout<<"enter 3rd number:";
    cin>>c;
    // if(a>b && a>c) cout<<a<<" is greatest number";
    // if(b>a && b>c) cout<<b<<" is greatest number";
    // if(c>b && c>a) cout<<c<<" is greatest number";



    // if(a>b){
    //     if(a>c) cout<<a<<" is greatest number";
    // }
    // if(b>a){
    //     if(b>c) cout<<b<<" is greatest number";
    // }
    // if(c>a){
    //     if(c>b) cout<<c<<" is greatest number";
    // }

    
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest number";
        }
        else{//c>a  a>b ; c>a>b
            cout<<c<<" is greatest number";
        }
    }
    else{//b>a
    if(b>c){
        cout<<b<<" is greatest number";
    }
    else{
        cout<<a<<" is greatest number";
    }
    }

}