#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character :";
    cin>>ch;
    int a=(int)ch;
    if((a>=65&&a<=90)||(a>=97&&a<=122)) {
        cout<<"character is alphabet";
    }
   else if(a>=48 && a<=57){
        cout<<"character is digit";
    }
    else cout<<"character is special symbol";
}