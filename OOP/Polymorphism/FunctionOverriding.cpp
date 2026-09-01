#include<iostream>
using namespace std;

class Parent{
    public:
    void show(){
        cout<<"This is parent class \n";
    }
};

class Child : public Parent{
    public:
    void show(){
        cout<<"This is child class \n";
    }
};

int main(){
    Parent p;
    Child c;

    p.show();
    c.show();
    return 0;
}