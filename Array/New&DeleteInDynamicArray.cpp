#include<iostream>
using namespace std;

void funcInt(){
    int *ptr = new int; // ptr pointer store value in heap memory allocation 
    *ptr = 5;          //So, To delete from heap we use 'delete ptr' and to allocate dynamically in heap we use New keyword

    cout <<*ptr;

    delete ptr;
}

void funcArr(){ 
    int size;
    cin>>size;

    int *ptr = new int[size]; //dynamic array memory allocation using new in heap


    int x=1;
    for (int i=0; i<size; i++){
        ptr[i] = x;
        cout << ptr[i]<<" ";
        x++;
    }
cout <<endl;

delete []ptr; //to delete array ptr from heap memory 
}

int main(){
    funcArr();
    funcInt();
}