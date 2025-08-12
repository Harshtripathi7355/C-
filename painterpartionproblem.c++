#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr,int n,int m,int mid){
    int time=0;
    int painter=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter > m ? false : true;
}

int minTimetoPaint(vector<int> &arr,int n,int m){
    
    if(m>n){
        return -1;
    }

    int sum=0;
    int maxVal=INT16_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    int st=maxVal;
    int end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;   
        }

    }
    return ans;
    
}


int main(){
    vector<int> arr={40,30,10,20};
    int n=4; 
    int m=2;
   
    
    cout<<minTimetoPaint(arr,n,m)<<endl;
    return 0;
}