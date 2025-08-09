#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int n=5;
    int maxSum = INT16_MIN;
    for(int st=0;st<n;st++){
        int current_sum=0;
        for(int end=st;end<n;end++){
            current_sum+=arr[end];
            maxSum=max(current_sum,maxSum);
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