#include<iostream>
using namespace std;
class stack{
public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0]-1)){
            cout<<"stack is Full !";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty";
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
}