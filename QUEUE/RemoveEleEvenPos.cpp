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
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    cout<<endl;
    int n=q.size();
    for(int i=0; i<n; i++){
        int x=q.front();
        q.pop();
        if(i%2!=0) q.push(x);
    }
    display(q);
    
}