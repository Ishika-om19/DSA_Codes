#include<iostream>
using namespace std;

int countSetBits(int num){
    int count = 0;
    while(num){
        int lastBit = num & 1; // Get the Last bit of the number
        count += lastBit; // Add the Last bit to the count 
        num = num >> 1; // Right Shift the number to process the next bit 
    }
    cout << "Total Set Bits in the number : " << count << endl;
    return count;
}

int main(){
    int num;
    cout <<"Enter number : ";
    cin >> num;
    countSetBits(num);
    return 0;
}