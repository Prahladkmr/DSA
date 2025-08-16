#include<iostream>
using namespace std;
class student{
    int id;
    int rollno;
public:
    void setid(int n){
        id=n;
    }
    void setrollno(int n){
        rollno=n;
    }
    int getid(){
        return id;
    }
    int getrollno(){
        return rollno;
    }
};
int main(){
    student prahlad;
    prahlad.setid(5);
    prahlad.setrollno(25);
    cout<<prahlad.getid()<<endl;
    cout<<prahlad.getrollno()<<endl;
}
