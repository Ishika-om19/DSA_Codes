#include<iostream>
using namespace std;

class Base{
    public:
       virtual void print(){//Virtual function always defined in Base class and redefined in derived class. It is used to achieve run time polymorphism.
            cout << "This is base class \n";
        }
};

class Derived : public Base{
    public:
         void print(){
            cout<< "This is derived class \n";
         }
};

int main(){
    Base *b = new Derived();//new Derived() creates an object of the derived class and assigns it to a pointer of the base class. This is an example of polymorphism.
    b->print();//Virtual function call. It will call the print() function of the derived class because the object is of the derived class.

    delete b;//delete the object to free up memory
    return 0;
}