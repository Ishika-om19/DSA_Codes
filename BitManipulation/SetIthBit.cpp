#include<iostream>
using namespace std;

int SetIthBit(int num, int i){
    int bitMask = 1 << i;
    return (num | bitMask);
}

int main(){
    int num, i;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter ith bit position to set : ";
    cin>>i;
    cout<<"The number after setting the " << i << "th bit is " << SetIthBit(num, i)<<endl;
    return 0;
}