#include<iostream>
using namespace std;

// Shallow Copy copies references to original array. But array remains same. So, if we change the value of one array, it will affect the other array as well.
// Deep Copy created a brand new copy of the array. So, if we change the value of one array, it will not affect the other array.
 class Car{
    public:
    string name;
    string color;
    int *mileage;

    //Default Constructor
    Car(){
        cout << "Default Constructor called" << endl;
    }

    //Parameterized Constructor
    Car(string name, string color, int mileage){
        cout << "Parameterized Constructor called" << endl;
        this->name = name; //object's name = parameter name
        this->color = color;
        this->mileage = new int; // allocate memory for mileage
        *(this->mileage) = mileage; // assign value to mileage
    }       

    //Copy Constructor
    Car(Car &original){ 
        cout << "Copy Constructor called" << endl;
        name = original.name;
        color = original.color;
        mileage = original.mileage; // Shallow Copy: copies the reference of mileage
    }

 };

int main(){
    Car c0;
    Car c1("Maruti", "Red", 20); // parameterized constructor creates an object using given values
    Car c2 = (c1); //Copy Constructor creates a new object c2 by copying an existing object c1
    cout << "Car Name: " << c2.name << endl;
    cout << "Car Color: " << c2.color << endl;
    cout << "Car Mileage: " << *(c2.mileage) << endl;
   
    *c2.mileage = 33; // changing the mileage of c2 will also change the mileage of c1 because both c1 and c2 are pointing to the same memory location for mileage
    cout << "Car Mileage after change in c2, c1 : " << *(c1.mileage) << endl;
    cout << "Car Mileage after change in c2, c2: " << *(c2.mileage) << endl;
    return 0;
}