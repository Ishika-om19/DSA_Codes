#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;

public:
    void getPercentage(){
        cout << "Percentage: " << cgpa * 10 << "%" << endl;
    }

    //Setter for Name
    void setName(string nameval){
        name = nameval;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getter for Name
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Ishiak");
    s1.setCgpa(9.0);

    cout << "Name: " << s1.getName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;
    return 0;
}