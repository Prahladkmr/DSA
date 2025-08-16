#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string RemoveDuplicate(string s){
     stack<char>st;
     st.push(s[0]);
     for(int i=1; i<s.length(); i++){
        if(st.top()==s[i]) continue;
        else st.push(s[i]);
     }
     string str="";
     while(st.size()!=0){
        str+=st.top();
        st.pop();
     }
     reverse(str.begin(),str.end());
     return str;
}
int main(){
    string s="aaabbcddegg";
    cout<<RemoveDuplicate(s);
}