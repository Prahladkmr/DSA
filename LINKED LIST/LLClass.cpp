#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
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
            insertAtEnd(val);
            return;
        }
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1; i<=idx-1; i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
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
    }
};
int main(){
    LinkedList II;
    II.insertAtEnd(10);
    II.insertAtEnd(20);
    II.insertAtEnd(30);
    II.display();
    cout<<endl;
    II.insertAtHead(50);
    II.display();
    cout<<endl;
    II.insertAt(3 ,80);
    II.display();
    cout<<endl;
    cout<<II.getAtidx(3)<<endl;
    II.deleteAtIdx(2);
    II.display();
    cout<<II.size;

} 