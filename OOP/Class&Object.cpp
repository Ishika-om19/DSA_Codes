#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        float cgpa;

        void getPercentage(){
            cout << "Percentage: " << cgpa * 10 << "%" << endl;
        }
};

int main(){
    Student s1;
    s1.name = "Ishika";
    s1.cgpa = 9.0;
    
    cout << "Name: " << s1.name << endl;
    cout << "CGPA: " << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}