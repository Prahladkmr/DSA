#include<iostream>
using namespace std;
// int product(int a,int b){
//     return a*b;
// }
// int main(){
//     cout<<product(2,4);
// }


void fun(int n){
    if(n==0) return ;
    cout<<"prahlad"<<endl;
    fun(n-1);
}
int main(){
    fun(4);
}