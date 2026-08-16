#include<iostream>
using namespace std;

int ClearIthBit(int num, int i){
    int bitMask = ~(1 << i);
    return (num & bitMask);
}

int main(){
    int num, i;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter ith bit position to clear :";
    cin>>i;
    cout<<"The number after clearing the"<< i <<"th bit is " << ClearIthBit(num, i)<<endl;
    return 0;
}