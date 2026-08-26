#include<iostream>
using namespace std;

void fastExponentiation(int x, int n){
    int ans = 1;
    while(n > 0){
        int lastBit = n & 1; // Get the last bit of the number
        if(lastBit){
            ans = ans * x; // If last bit is 1, multiply the answer with x 
        }
        x = x * x; // Square the value of x
        n = n >> 1; // Right shift the number to process the next bit 
    }
    cout << "Result: " << ans << endl;
}

int main(){
    int x, n;
    cout << "Enter number x : ";
    cin >> x;
    cout << "Enter power n : ";
    cin >> n;
    fastExponentiation(x, n);
    return 0;
}