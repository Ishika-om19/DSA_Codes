#include<iostream>
using namespace std;


//First Child class constructor is called, then Parent class constructor is called.
//But Destructors are called in reverse order, first Parent class destructor is called, then Child class destructor is called.
//Because of this, we can say that the order of constructor and destructor calls is opposite in inheritance.
class Parent{
    public:
        Parent(){
            cout << "Parent class constructor called." << endl;
        }

        ~Parent(){
            cout << "Parent class destructor called." << endl;
        }
};

class Child : public Parent{
    public:
        Child(){
            cout << "Child class constructor called." << endl;
        }

        ~Child(){
            cout << "Child class destructor called." << endl;
        }
};

int main(){
    cout << "Creating Child object..." << endl;// Creating Object of class automatically calls the constructor of the class.
    Child ch;//when program ends, the destructor of the class is automatically called.
    return 0;
}