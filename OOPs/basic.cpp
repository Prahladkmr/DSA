#include<iostream>
using namespace std;
class player{
        public:
        int score;
        int health;
        string name;
    };
int main(){
    player amit;
    amit.health=100;
    amit.score=10;
    amit.name="amit";
    cout<<amit.health<<endl;
    cout<<amit.score<<endl;
    cout<<amit.name;
}