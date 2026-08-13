#include <iostream>
using namespace std;

int GetIthBit(int num, int i){
    int bitMask = 1 << i;
    if(!(num & bitMask)){
        return 0;
    } else{
        return 1;
    }
}

int main(){
    int num, i;
    cout <<"Enter number : ";
    cin >> num;
    cout <<"Enter ith bit position : ";
    cin >> i;
    cout << "The " << i << "th bit of " << num << " is : " << GetIthBit(num, i) << endl;
    return 0;
}