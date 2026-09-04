#include<iostream>
#include<string>
using namespace std;

//Abstraction is Hiding all unnecessary details & showing only important details to the user.
//Pure virtual function is a virtual function that has no definition in the base class and must be overridden in derived classes. It is declared by assigning 0 in its declaration.

//Abstract class
class shape{
    public:
        virtual void draw()=0; //pure virtual function,abstract function
};

class Circle: public shape{
    public:
         void draw(){
            cout<<"Drawing Circle"<<endl;
         }
};

class Square: public shape{
    public:
       void draw(){
            cout<<"Drawing Square"<<endl;
       }
};

int main(){
    Circle c;
    c.draw();
    Square s;
    s.draw();
    return 0;
}