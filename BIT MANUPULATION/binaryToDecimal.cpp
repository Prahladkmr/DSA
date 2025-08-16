#include<iostream>
using namespace std; 
int binary_to_decimal(string s){
    int n=s.length();
    int res=0;
    for(int i=n-1; i>=0; i--){
        char ch=s[i];
        int num=ch-'0';
        res+=num*(1<<(n-i-1));
    }
    return res;
}
int BinaryToDecimal(string a){
        int s=-1;
        if(a[0]=='1') s=1;
        else s=0;
        int i=1;
        while(i!=a.length()){
            s*=2;
            if(a[i]=='1') s+=1;
            else s+=0;
            i++;
        }
        return s;
    }
int main(){
    string s="001011";
    cout<<binary_to_decimal(s);
    //cout<<BinaryToDecimal(s);
}