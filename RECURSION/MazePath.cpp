/* calculate the min ways to reach
 the last home if only move down and right
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways + downways;
}
int maze2(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int rightways=maze2( er,ec-1);
    int downways=maze2(er-1,ec);
    return rightways + downways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) cout<<s<<endl;;;
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int main(){
    // cout<<maze(1,1,3,3);
    cout<<maze2(3,3);
    //printpath(1,1,3,3,"");
}