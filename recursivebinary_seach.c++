#include<iostream>
#include<vector>
using namespace std;

int recBS(vector<int> table,int target,int st,int end){
    if(st<=end){
        int mid=(st+end)/2;
        if(table[mid]<target){
            return(table,target,mid+1,end);
        }
        else if(table[mid]>target){
            return(table,target,st,mid-1);
        }
        else{
            return table[mid];
        }
    }
    return -1;   
}


int main(){
    vector<int> table={-1,0,3,4,5,9};
    int target=-1;
    int result=recBS(table,target,0,table.size() -1);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;    
}