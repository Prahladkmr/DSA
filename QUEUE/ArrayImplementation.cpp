#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int n;
    int arr[1000];
    Queue(int val){
        f=0;
        b=0;
        n=val;
    }
    void push(int val){
        if(b==n){
            cout<<"Queue if full";
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue if empty";
            return;
        }
        f++;
    }
    int top(){
        if(f-b==0){
            cout<<"Queue if empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b==0){
            cout<<"Queue if empty";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }
    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
using namespace std;
int main(){
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    cout<<q.back();
}