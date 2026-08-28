#include<iostream>
using namespace std;

class User{
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id; //left object id and right parameter passed id 
    }

    //Getter for password
    //Getter ka kaam private variable ki value ko read/access karna hota hai.
    string getPassword(){
        return password;
    }

    //Setter for password
    //Setter ka kaam private variable ki value ko set/change karna hota hai.
    void setPassword(string password){
        this->password = password;
    }

    //Getter for id
    int getId(){
        return id;
    }
};

int main(){
    User user1(175);
    user1.username = "Ishika";
    user1.setPassword("ish1233");
    cout << "Username: " << user1.username << endl;
    cout << "Password: " << user1.getPassword() << endl;
    cout << "Id: " << user1.getId() << endl;
    return 0;
}