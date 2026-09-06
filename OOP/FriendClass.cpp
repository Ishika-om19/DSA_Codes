#include <iostream>
#include <string>
using namespace std;

class A {
    string secret = "This is a secret message.";
    friend class B; // Declare class B as a friend of class A
};

class B{ //becomes a friend of class A and can access its private members
    public:
    void showSecret(A &obj){
        cout << "Accessing secret from class A: " << obj.secret << endl; // Accessing private member of class A
    }
};

int main() {
    A A1;
    B B1;
    B1.showSecret(A1); // Accessing private member of class A through class B
    return 0;
}