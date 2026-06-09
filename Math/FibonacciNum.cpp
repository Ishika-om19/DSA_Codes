#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Fibonacci terms :";
    cin>>n;
    int first=0,second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=3;i<=n;i++){
        int third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    cout<<endl;
    return 0;
}