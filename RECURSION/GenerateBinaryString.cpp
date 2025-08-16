#include<iostream>
#include<string>
#include<vector>
using namespace std;
void GenerateBinaryString(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    if(s.length()==0 || s[s.length()-1]=='0'){
        GenerateBinaryString(s+'0',n);
        GenerateBinaryString(s+'1',n);
    }
    else GenerateBinaryString(s+'0',n);
}
int main(){
   int n=3;
   GenerateBinaryString("",n);
}