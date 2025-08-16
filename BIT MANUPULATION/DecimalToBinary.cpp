#include<iostream>
using namespace std; 
string decimal_to_binary(int n){
    string res="";
    while(n>0){
        if(n%2==0) res="0"+res;
        else res="1"+res;
        n=n>>1;
        cout<<n<<endl;
    }
     return res;
}
int main(){
     int n=12;
     cout<<decimal_to_binary(n);
}