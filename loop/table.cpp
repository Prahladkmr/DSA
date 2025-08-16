#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a table:";
    cin>>n;
    for(int i=1; i<=10; i++){
        int s=1;
        s=n*i;
        cout<<n<<" * "<<i<<" = "<<s<<endl;
    }
        
}