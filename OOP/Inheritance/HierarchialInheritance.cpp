#include<iostream>
#include<string>
using namespace std;

//Hierarchial Inheritance
// one base class properties inherit multiple derived class

class Animal{
    public:
    void eat(){
        cout << "Eats"<< endl;
    }

    void breath(){
        cout << "Breath" << endl;
    }
};

class Bird : public Animal{
    public:
    void fly(){
        cout<< "Bird fly" << endl;
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout << "Fish swim" << endl;
    }
};

int main(){
    Bird b1;
    Fish f1;
    b1.eat();
    b1.fly();
    f1.eat();
    f1.swim();
    return 0;
}