#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st; 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    //putting ele back in st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
