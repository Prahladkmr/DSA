#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sumtree(Node* root){
    if(root==NULL) return 0;
    int ans=root->val+sumtree(root->left) + sumtree(root->right);
    return ans;
}
int size(Node* root){
    if(root==NULL) return 0;
    int ans=1+size(root->left) +  size(root->right);
    return ans;
}
int maxTree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxTree(root->left),maxTree(root->right)));
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->left=h;
    display(a);
    cout<<endl;
    cout<<sumtree(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxTree(a)<<endl;
    cout<<level(a)<<endl;
}