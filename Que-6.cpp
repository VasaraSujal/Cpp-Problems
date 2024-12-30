// 6.

#include <iostream>
using namespace std; 

void Login(string UserName, string Password){
    string ValidUser = "admin";
    string ValidPassword = "1234";
    if(ValidUser==UserName && ValidPassword==Password){
        cout << "Login Successful";
    }else{
        cout << "Login Failed";
    }
}

int main() {
    Login("new", "1038");

    return 0;
}