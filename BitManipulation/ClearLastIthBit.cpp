#include <iostream>
using namespace std;

void clearIthBits(int num, int i){
    int bitMask = (~0)<<i; // Create a bitmask with 1 from the ith position to the left(<<) and 0 to the right
    num = num & bitMask; // Clear the last i bits
    cout << "Number after clearing " << i << " bits: " << num << endl;
}

int main(){
    int num, i;
    cout << "Enter number : ";
    cin >>num;
    cout << "Enter number of bits to clear from last : ";
    cin >> i;
    clearIthBits(num, i);
    return 0;
}