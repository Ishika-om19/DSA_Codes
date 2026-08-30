#include<iostream>
#include<string>
using namespace std;
// Two or More Base class properties inherits by one derived class

class Teacher{
    public :
    int salary;
    string subject;
};

class Student{
    public :
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student{
    public :
    string name;
};

int main(){
    TA ta1;
    ta1.name = "Ishika";
    ta1.cgpa = 9.1;
    ta1.subject = "c++";

    cout<< ta1.name<< endl;
    cout<< ta1.cgpa<< endl;
    cout<< ta1.subject<< endl;
    return 0;
}