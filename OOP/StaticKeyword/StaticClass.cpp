#include <iostream>
using namespace std;

//Static variable in a class are created & initialised once for the lifetime of the program. They are shared by all objects of the class.

class Example{
    public:
    static int x; //static variable doesn't initialize in class.
    // if you want to initialize in class you have to use const keyword before data type ex :- static const int x = 0;
    Example(){// constructor called automatically when object is created.
        x++;
    }
    void displayCount(){
        cout << "X: " << x << endl;
    }
};


//Outside the class, we have to initialize the static variable.
int Example::x = 0; //static variable initialized outside the class.

int main(){
    Example e1;// constructor called automatically 
     e1.displayCount();
    Example e2;// constructor called automatically
    e2.displayCount();
    Example e3;// constructor called automatically
    e3.displayCount();

    return 0;
}