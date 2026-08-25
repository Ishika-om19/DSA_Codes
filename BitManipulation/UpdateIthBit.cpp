#include <iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num = num & ~(1 << i); // Clear the ith bit 
    num = num | (val << i); // Set the ith bit to val
    cout << "Updated number : " << num << endl;
}

int main(){
    int num, i, val;
    cout << "Enter number : ";
    cin >> num;
    cout << "Enter bit position to update : ";
    cin >> i;
    cout << "Enter value (0 or 1 ) to set at position i : ";
    cin >> val;
    updateIthBit(num, i, val);
    return 0;
}