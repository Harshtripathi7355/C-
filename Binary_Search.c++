#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> table, int target){
    int n=table.size();
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;   // use this formulae  mid=(st+end)/2
        if(table[mid]<target){
            st=mid+1;
        }
        else if(table[mid]>target){
            end=mid-1;
        }
        else {
            cout<<"Target found at index "<<mid<<endl;
            return 0;
        }    
    }
    cout<<"Target not found"<<endl;
    

}

int main(){
    vector<int> table={-1,0,3,4,5,9};
    int target=0;
    binary_search(table,target);
    return 0;    
}