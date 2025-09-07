#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}