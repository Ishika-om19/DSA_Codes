#include <iostream>
using namespace std;
//Recursion is a method of solving computational problems where the solution depends on solutions to smaller instances of the same problem. 
//Here, we define a recursive function `factorial` that calculates the factorial of a given number `n`. The base case for the recursion is when `n` is 0 or 1, in which case the function returns 1. For other values of `n`, the function calls itself with `n-1` and multiplies the result by `n`.
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);//Recursive call to factorial function with n-1
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) <<endl;
    return 0;
}