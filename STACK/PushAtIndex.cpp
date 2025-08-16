#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;

}
void PushAtIndex(stack<int>&st,int idx,int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    PushAtIndex(st,0,90);
    print(st);
}
