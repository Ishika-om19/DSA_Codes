#include<iostream>
using namespace std;

//Static Object is created only once for the lifetime of the program. 
//It is created when the program starts and destroyed when the program ends.
// It is not destroyed when the function in which it is created ends. 

class Example{
public:
    Example(){
        cout << "Constructor called" << endl;
    }

    ~Example(){
        cout << "Destructor called" << endl;
    }

};

int main(){
int a= 0;
if(a==0){
    static Example e1; // static object created only once for the lifetime of the program.
}
cout<<"Code End...."<<endl;
return 0;
}