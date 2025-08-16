#include<iostream>
using namespace  std;
class complexnumber{
public:
    int img;
    int real;

    complexnumber operator +(complexnumber &c1){
        complexnumber c2;
        c2.img=c1.img + this->img;
        c2.real=c1.real+this->real;
        return c2;
    }
};
int main(){
     complexnumber a1,a2;
     a1.img=10;
     a1.real=5;
     a2.img=2;
     a2.real=3;

     complexnumber a3=a2+a1;
     cout<<"img="<<a3.img<<" "<<"real="<<a3.real;


}