#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int el: nums){
            if(val==el){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    } 
    return -1;   
}
int main(){
    vector<int> nums = {3,2,3};
    cout<<majorityElement(nums)<<endl;  
}