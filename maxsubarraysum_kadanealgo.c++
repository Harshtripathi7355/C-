#include<iostream>
using namespace std;

int main() {
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxSum = INT16_MIN;
    for(int st=0;st<n;st++){
        int current_sum=0;
        for(int end=st;end<n;end++){
            current_sum+=arr[end];
            maxSum=max(current_sum,maxSum);
            if(current_sum<0){
                current_sum=0;
            }
            for(int i=st;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum sum of subarray is "<<maxSum<<endl;
    return maxSum;
}