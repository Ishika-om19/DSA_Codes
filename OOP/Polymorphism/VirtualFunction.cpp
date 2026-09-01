#include<iostream>
using namespace std;

//Two types of polymorphism :- 
//1. Compile time polymorphism :- Function overloading and operator overloading
//2. Run time polymorphism :- Function overriding and virtual function

//Function Overriding :- Parent and child both contain the same function with different implementation. The function in the child class overrides the function in the parent class. 
//A virtual function is a member function that you expect to be redefined in derived classes.

class Parent{
    public:
    virtual void hello(){//Virtual function always defined in Parent class and redefined in child class. It is used to achieve run time polymorphism.
        cout << "Hello from parent class \n";
    }
};

class Child : public Parent{
    public:
    void hello(){
        cout << "Hello from child class \n";
    }
};

int main(){
    Child c;
    Parent *ptr;
    ptr = &c;//runtime Binding 
    ptr->hello();//Virtual function call
    return 0;
}