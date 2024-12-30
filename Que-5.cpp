// 5.

#include <iostream>
using namespace std; 

void eligibility(int age){
    if(age>=18){
        cout << "Eligible";
    }else{
        cout << "Not eligible";
    }
}


int main() {
    eligibility(15);
    return 0;
}