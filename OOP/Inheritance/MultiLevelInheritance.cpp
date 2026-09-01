#include<iostream>
#include<string>
using namespace std;
//Multi-Level Inheritance
// Base Class -> Derived Class -> Derived Class

class Animal{
    public:
    void eat(){
        cout<< "eats\n";
    }

    void breathe(){
        cout<<"breathes\n";
    }
};

class Mammal : public Animal{
    public:
    string bloodType;

    Mammal(){
        bloodType = "warm";
    }
};

class Dog : public Mammal{
    public:
    void tailWag(){
        cout<<"A Dog wags its tails\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.tailWag();
    d1.breathe();
    cout<< d1.bloodType << endl;
    return 0;
}