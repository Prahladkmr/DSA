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
    player a;
    a.sethealth(70);
    a.setage(21);
    a.setscore(32);
    a.setalive(true);

    player b;
    b.sethealth(72);
    b.setage(22);
    b.setscore(37);
    b.setalive(true);

    cout<<addscore(a, b)<<endl;
    player sanket=getmax(a,b);
    cout<<sanket.getscore();

}