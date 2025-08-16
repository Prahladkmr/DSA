#include<bits/stdc++.h>
using namespace std;
class player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool getalive(){
        return alive;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age= age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setalive(bool alive){
        this->alive= alive;
    }
};

int addscore(player a,player b){
    return a.getscore() + b.getscore();
}

player getmax(player a, player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
     
    player *urvi= new player;//pointer to object
    urvi->sethealth(55);
    urvi->setage(24);
    cout<<(*urvi).gethealth()<<endl;
    cout<<urvi->getage();

     

}