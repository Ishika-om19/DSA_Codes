#include<iostream>
using namespace std;

void printDecreasing(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printDecreasing(n-1) ; // Recursive call to printDecreasing function with n-1
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers in decreasing order: ";
    printDecreasing(n);
    return 0;
}