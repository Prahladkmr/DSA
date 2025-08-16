#include<iostream>
#include<string>
using namespace std;
class cricketer{
public:
    string name;
    int age;
    int nooftest;
    int avgscore;
};
int main(){
    cricketer virat;
    virat.name="virat Kohli";
    virat.age=34;
    virat.avgscore=54;
    virat.nooftest=196;

    cricketer rohit;
    rohit.name="Rohit sharma";
    rohit.age=35;
    rohit.avgscore=53;
    rohit.nooftest=94;

    cricketer cricketers[2]{virat,rohit};
    for(int i=0; i<2; i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].avgscore<<endl;
        cout<<cricketers[i].nooftest<<endl;
    }

}