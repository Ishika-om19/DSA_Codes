#include<iostream>
#include<string>
using namespace std;

class A{
    string secret = "This is a secret message.";
    friend void revealSecret(A &obj); // Declare revealSecret as a friend function of class A
};

void revealSecret(A &obj){
    cout << "Accessing secret from class A: " << obj.secret << endl; // Accessing private member of class A
}

int main(){
    A a1;
    revealSecret(a1); // Accessing private member of class A through friend function
    return 0;
}