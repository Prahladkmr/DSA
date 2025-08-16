#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
   string str;
   getline(cin,str);
   string temp;
   stringstream ss(str);
   vector<string>v;
   while(ss>>temp){
    v.push_back(temp);
   }
   sort(v.begin(),v.end());
   int mx=1,count=1;
   for(int i=1; i<v.size(); i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    mx=max(mx,count);
   }
   count=1;
   for(int i=1; i<v.size(); i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(count==mx){
        cout<<v[i]<<" "<<mx<<endl;
    }
   }



}