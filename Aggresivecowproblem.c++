#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr,int n,int m,int mid){
    int laststallpos=arr[0];
    int cows=1;
    for(int i=0;i<n;i++){
        if((arr[i]-laststallpos)>=mid){
            cows++;
            laststallpos=arr[i];
        }
        if(cows==m) return true;
    }
    return false;
}

int mindistance(vector<int> &arr,int n,int m){
    sort(arr.begin(),arr.end());
    
    if(m>n){
        return -1;
    }

    int st=1;
    int end=arr[n-1]-arr[0];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;   
        }

    }
    return ans;
    
}


int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5; 
    int m=3;
   
    
    cout<<mindistance(arr,n,m)<<endl;
    return 0;
}