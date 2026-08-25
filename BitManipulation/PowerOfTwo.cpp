#include<iostream>
using namespace std;

bool isPowerOfTwo(int num){
    if(!(num & (num - 1))){
        return true;
    } else{
        return false;
    }
}
    int main(){
    int num;
    cout <<"Enter number :";
    cin >> num;
    cout << isPowerOfTwo(num) << endl;
    return 0;
    }