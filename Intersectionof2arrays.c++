#include<iostream>
using namespace std;

int Intersectionof2Arrays(int arr1[],int arr2[],int size1,int size2) {
    cout <<"Intersection of two arrays is: ";
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<< arr1[i] <<" ";
                break;
            }
        }
    }
    cout<<endl;
}

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,7,8,9,10};
    int size1 = 5;
    int size2 = 5;
    Intersectionof2Arrays(arr1,arr2,size1,size2);
    return 0;

}