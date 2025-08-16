#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of student:";
    cin>>n;
    cout<<"enter the marks"<<endl;
    int marks[n];
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    for(int i=0; i<n; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}