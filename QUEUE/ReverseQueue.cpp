#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
void reverse(queue<int>&q){
    stack<int>st;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x= st.top();
        st.pop();
        q.push(x);
    }

}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    cout<<endl;
    display(q);
    
}