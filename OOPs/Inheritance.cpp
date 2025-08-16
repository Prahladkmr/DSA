#include<iostream>
using namespace  std;
class vehicle{//base class
public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname;
};
class car : public vehicle{//child class,derived class
public:
    int steeringsize;
};
class bike : public vehicle{
public:
    int handlesize;

     
};
int main(){
    bike honda;
    honda.companyname="honda";
    honda.tyresize=10;
    cout<<honda.tyresize;
}