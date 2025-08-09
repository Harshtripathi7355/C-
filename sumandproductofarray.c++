#include <iostream>
using namespace std;

int SumofArray(int arr[],int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int ProductofArray(int arr[],int size){
    int product = 1;
    for(int i = 0; i < size; i++){
        product = product * arr[i];
    }
    return product;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int result_sum = SumofArray(arr, size); 
    int result_product = ProductofArray(arr, size);
        cout <<"Sum of all numbers of array is = " << result_sum <<endl;
        cout <<"Product of all numbers of array is = " << result_product <<endl;
}