#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAt(int idx,int val){
        if(idx==0){
            insertAtHead(val);
            return;
        }
        if(idx==size){
            insertAtTail(val);
            return;
        }
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1; i<=idx-1; i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        size++;
    }
    int getAtidx(int idx){
        if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else {
            Node* temp=head;
            for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtIdx(int idx){
        Node* temp=head;
        for(int i=1;i<idx; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
    }
};
int main(){
    DLL list;
    list.insertAtHead(50);
    list.insertAtHead(60);
    list.insertAtTail(20);
    list.display();
    cout<<endl;
    list.insertAt(1,100);
    list.display();
    cout<<endl;
    list.insertAtTail(10);
    list.display();
    list.deleteAtIdx(3);
    cout<<endl;
    list.display();
    cout<<list.getAtidx(0);


} 