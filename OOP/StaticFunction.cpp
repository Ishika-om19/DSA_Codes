#include<iostream>
#include<string>
using namespace std;

//Variable declared as static in a function are created & initialised once for the lifetime of the program.

void counter(){
    static int count = 0; //static variable
    count++;
    cout<<"Count: "<<count <<endl;
}
//If we don't use static variable, the output will be always 1 because the variable will be created & initialised every time the function is called.
//But this is not the case with static variable, it will be created & initialised only once for the lifetime of the program.
int main(){
    counter();//1
    counter();//2
    counter();//3
    return 0;
}