#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int mid){
    int pages=0;
    int student=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student > m ? false : true;
}

int allocatebooks(vector<int> &arr,int n,int m){
    
    if(m>n){
        return -1;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0;
    int end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
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
    vector<int> arr={15,17,20};
    int n=3; 
    int m=2;
   
    
    cout<<allocatebooks(arr,n,m)<<endl;
    return 0;
}