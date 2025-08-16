#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<int>nums;
     nums.push_back(3);
     nums.push_back(2);
     nums.push_back(1);
     int n=nums.size();
     int pivot=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
        }
        else {
        reverse(nums.begin()+pivot+1,nums.end());
        int idx=0;
        for(int i=pivot; i<n; i++){
            if(nums[pivot]<nums[i]){
                idx=i;
                break;
            }
        }
        int temp=nums[pivot];
        nums[pivot]=nums[idx];
        nums[idx]=temp;
        }
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
    
     
     
}
