#include<iostream>
using namespace std;

// Deep Copy created a brand new copy of the array. So, if we change the value of one array, it will not affect the other array.

class Car{
    public:
    string name;
    string color;
    int *mileage;

    //Default Constructor
    Car(){
        cout<< "Default Constructor called" << endl;
    }

    //Parameterized Constructor
    Car(string name, string color, int mileage){
        cout << "Parameterzied Constructor called" << endl;
        this->name = name;  //object's name = parameter name
        this->color = color;
        this->mileage = new int; // allocate memory for mileage
        *(this->mileage) = mileage; // assign value to mileage
    }

    //Copy Constructor
    Car(Car &original){
        cout << "Copy Constructor called" << endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *(mileage) = *(original.mileage);  // Deep copy
    }

    //Destructor
    //obbjects are destroyed in reverse order of creation,we use deep copy so c1 & c2 have different memory addresses for mileage.
    
    ~Car(){
        cout << "deleting object..\n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};

int main(){
    Car c0;
    Car c1("Maruti", "Red", 30);
    Car c2 = (c1);
    cout << "Car Name: " << c2.name << endl;
    cout << "Car Color: " << c2.color << endl;
    cout << "Car Mileage: " << *(c2.mileage) << endl;

    *c2.mileage = 33; // changing the mileage of c2 will also change the mileage of c1 because both c1 and c2 are pointing to the same memory location for mileage
    cout << "Car Mileage after change in c2, c1 : " << *(c1.mileage) << endl;
    cout << "Car Mileage after change in c2, c2: " << *(c2.mileage) << endl;
    return 0;

}