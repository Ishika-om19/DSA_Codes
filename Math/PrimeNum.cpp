#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    
    if(isPrime){
        cout<<"number is Prime"<<endl;
    }
    else{
        cout<<"number is Not Prime"<<endl;
    }
    return 0;
    }
