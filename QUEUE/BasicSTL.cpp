#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    while(n>0){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        n--;
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
}