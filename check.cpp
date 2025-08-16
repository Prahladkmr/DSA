#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
     // vector<int>nums={1,7,3,6,5,6};
     // int n=nums.size();
     //    vector<int>pre(n+1);
     //    pre[0]=0;
     //    for(int i=1; i<=n; i++){
     //         pre[i]=pre[i-1]+nums[i-1];
     //    }
     //    for(int i=0; i<=n; i++){
     //          cout<<pre[i]<<" ";
     //    }
     //    for(int i=1; i<=n; i++){
             
     //        if(pre[i]==( pre[n]-pre[i-1])) cout<<i-1;
     //    }
     //    //return -1;

     //cout<<(1<<3);
     //cout<<(4>>1);
     //cout<<(3^2);
    //  string s="xywrrmp";
    //  string t="xywrrmu#p";
    //   stack<char>p;
    //     for(int i=0; i<s.length(); i++){
    //         if(s[i]=='#'){
    //             if(p.size()==0) continue;
    //             else p.pop();
    //         }
    //         else p.push(i);
    //     }
    //     stack<char>q;
    //     for(int i=0; i<t.length(); i++){
    //         if(t[i]=='#'){
    //             if(q.size()==0) continue;
    //             else q.pop();
    //         }
    //         else q.push(i);
    //     }
    //     if(p==q) cout<<true;
    //     else cout<<false;

    int arr[]={8,4,5,0,0,0,0,7};
    int n=sizeof(arr)/sizeof(arr[0]);
        stack<int>s;
        for(int i=0; i<n; i++){
            if(s.size()>=n) break;
            s.push(arr[i]);
            if(s.size()>=n) break;
            
            if(arr[i]==0){
                s.push(0);
            }
            
             
        }
        for(int i=0; i<n; i++){
            cout<<s.top()<<" ";
            arr[i]=s.top();
            s.pop();
        }
        for(int i=0; i<n; i++){
           // cout<<arr[i]<<" ";
        }











}