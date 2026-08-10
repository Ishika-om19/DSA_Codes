#include<iostream>
using namespace std;

void OddOrEven(int num){
    if(!(num & 1)){
        cout << num << " is Even"<<endl;
    } else{
        cout<< num << " is Odd"<<endl;
    }
}

int main(){
    int num;
    cout <<"Enter number : ";
    cin >> num;
    OddOrEven(num);
    return 0;
}