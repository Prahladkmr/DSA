 #include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string str;
     getline(cin,str);
     int n=str.length();
    
    for(int i=0; i<n-1; i++){//n-1 passes
        //traverse
        bool flag=true;
        for(int j=0; j<n-1-i; j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0; i<n; i++){
        cout<<str[i];
    }
}