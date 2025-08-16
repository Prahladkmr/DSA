#include<iostream>
using namespace  std;
class bike{
public:
    int tyresize;
    int petrol;
    int speed;

    bike(int tyresize,int petrol,int speed){//constructor
        this->tyresize=tyresize;
        this->petrol=petrol;
        this->speed=speed;
    }
    ~bike(){//destructor
        cout<<"destructor"<<endl;
    }
};
int main(){
    bike tvs(12,1,80);
    bike honda(14,2,70);
    cout<<tvs.tyresize<<endl;
    cout<<tvs.petrol<<endl;
    cout<<tvs.speed<<endl;

}