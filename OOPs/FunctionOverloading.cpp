#include<iostream>
using namespace  std;
class bike{
public:
    int tyresize;
    int petrol;
    int speed;

    bike(int ts,int p,int s):tyresize(ts),petrol(p),speed(s){} //fuction overloading
    bike(int ts):tyresize(ts),petrol(3),speed(90){}            //function overloading
    bike():tyresize(15),petrol(3),speed(100){}
    ~bike(){//destructor
        cout<<"destructor"<<endl;
    }
};
int main(){
    bike tvs(12);
    bike honda(14,2,70);
    cout<<tvs.tyresize<<endl;
    cout<<tvs.petrol<<endl;
    cout<<tvs.speed<<endl;

}