 #include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="A man, a plan, a canal: Panama";
    stringstream ss(s);
    string temp;
    string str="";
    while(ss>>temp){
        int n=temp.length();
          int i=0,j=n-1;
          while(i<=j){
            char ch=temp[i];
            temp[i]=temp[j];
            temp[j]=ch;
            i++;
            j--;
        }
        str+=temp;
        str+=" ";

    }
    //cout<<temp<<endl;
    str.pop_back();
    cout<<str;
}