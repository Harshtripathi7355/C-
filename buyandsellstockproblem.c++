#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int maxProfit=0;
    int bestbuy=prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]>bestbuy){
            maxProfit=max(maxProfit,prices[i]-bestbuy);
        }   
        bestbuy=min(bestbuy,prices[i]);
    }
    return maxProfit;    
}

int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
}