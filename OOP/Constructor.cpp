#include <iostream>
using namespace std;
// this is a special pointer in c++ that points to the current object of the class
class Car{
    string name;
    string color;

public:
    Car(){
        cout << "Constructor without parameters called " << endl;
    }
    Car(string name, string color){
        cout << "Constructor with parameters called" << endl;
        this->name = name;
        this->color = color;
    }

    void start(){
        cout << "Car started" << endl;
    }

    void stop(){
        cout << "Car stopped" << endl;
    }

    //Getter for Name 
    string getName(){
        return name;
    }
    
    //Getter for Color
    string getColor(){
        return color;
    }

};
    int main(){
        Car c1;
        Car c2("Maruti", "Red");
        c1.start();
        cout << "Car Name: " << c2.getName() << endl;
        cout << "Car Color: " << c2.getColor() << endl;
        return 0;
    }
