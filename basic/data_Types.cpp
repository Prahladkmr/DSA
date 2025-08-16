#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    //  float f;
    //  cin>>f;
    //  cout<<f;
    // return 0;
    int x;
    cin>>x;
    int s=0,r=0;
    while(x>0){
        s*=10;
        r=x%10;
        s+=r;
        x/=10;
    }
    cout<<s;
}