#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void printsubset(string ans,string original,bool flag){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    char dh=original[1];
    if(original.length()==1){
         if(flag==true) printsubset(ans+ch, original.substr(1),true );
         printsubset(ans, original.substr(1),true);
    }
    else if(ch==dh){
        if(flag==true) printsubset(ans+ch, original.substr(1),true );
        printsubset(ans, original.substr(1),false);  
    }
    else {
        if(flag==true) printsubset(ans+ch, original.substr(1),true );
        printsubset(ans, original.substr(1),true);  
    }
}
int main(){
    string str="aaac";
    printsubset("",str,true);

}