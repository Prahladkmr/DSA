//WAP TO CHECK CHARACTER IS AN ALPHABET OR NOT
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    int a=(int)ch;
    if(a>=65 && a<=91 || a>=97 && a<=123){
        cout<<"charcter is alphabet";
    }
    else cout<<"charcter is not alphabet";
}