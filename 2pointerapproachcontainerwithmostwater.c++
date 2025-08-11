#include<iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
        int maxWater=0;
        int n=height.size();
        int lp=0;
        int rp=n-1;

        while(lp<rp){
            int width=rp-lp;
            int ht=min(height[lp],height[rp]);
            int area=width*ht;

            maxWater=max(maxWater,area);\
            if(height[lp]>height[rp]){
                rp--;
            }
            else{
                lp++;
            }
            
        }
        return maxWater;
        
    }

    int main(){
        vector<int> height={1,8,6,2,5,4,8};
        cout<<maxArea(height)<<endl;
    }