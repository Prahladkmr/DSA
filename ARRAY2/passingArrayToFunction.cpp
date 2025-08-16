#include<iostream>
using namespace std;
void display(int arr[]){
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    display(arr);
    change(arr);
    display(arr);
}