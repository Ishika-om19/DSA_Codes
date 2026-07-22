#include<iostream>
using namespace std;
int main(){
    int size;
    cin>> size;
    int *arr = new int[size];  //here dynamic array allocation using new in stact because in main function"int main()"
                               //due to this in main function we don't have to reallocate using delete []arr
                               //because this not in heap it is in stack   
    int x=1;
    for(int i=0; i<size; i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<<endl;
    return 0;
}