#include<iostream>
#include<string>
using namespace std;

class print{
    public:
    void show (int x){
        cout<<"int: "<< x << endl;
    }
    void show(string str){
        cout<< "string: "<< str << endl;
    }
};

int main(){
    print obj;
    obj.show(34);
    obj.show("Ishika");
    return 0;
}