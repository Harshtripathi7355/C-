#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>current){
            arr[previous+1]=arr[previous];
            previous--;
        }

        arr[previous+1] = current;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}

int main(){
    int n=5;
    int arr[] = {4,1,5,2,3};

    insertionsort(arr,n);
    printarr(arr,n);
    return 0;

}