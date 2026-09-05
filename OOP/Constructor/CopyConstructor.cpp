#include<iostream>
using namespace std;

//Copy Constructor is a special type of constructor (default) used to copy properties of one object into another object of the same class. It is used when we want to create a new object as a copy of an existing object.
class Car{
    public:
    string name;
    string color;

    //Default Constructor
    Car(){
        cout << "Default Constructor called" << endl;
    }

    //Parameterized Constructor
    Car(string name, string color){
        cout << "Parameterized Constructor called" << endl;
        this->name = name; //object's name = parameter name
        this->color = color;
    }

    Car(Car &original){
        cout << "Copy Constructor called" << endl;
        name = original.name;
        color = original.color;
    }
};

int main(){
    Car c0;
    Car c1("Maruti", "Red"); // parameterized constructor creates an object using given values
    Car c2 = (c1); //Copy Constructor creates a new object c2 by copying an existing object c1
    cout << "Car Name: " << c2.name << endl;
    cout << "Car Color: " << c2.color << endl;
    return 0;
}