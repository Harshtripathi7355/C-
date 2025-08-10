#include<iostream>
#include<cmath>
using namespace std;

double myPow(double x, int n) {
    if(n==0)
    return 1;
    else if(x==0)
    return 0;
    else 
    return pow(x , n);
}

int main(){
    double x = 2.0;
    int n = 3;
    cout << myPow(x, n) << endl;
}