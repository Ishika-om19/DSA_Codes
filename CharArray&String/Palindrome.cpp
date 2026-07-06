#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int n){
    int start = 0, end = n-1;
    while(start < end){
        if (str[start++] != str[end--]){
            cout <<"Not a palindrome" <<endl;
            return false;
        }
    }
    cout <<"Is a palindrome" <<endl;
    return true;
}

int main(){
    char word[] = "madam";
    isPalindrome(word, strlen(word));
    return 0;

}