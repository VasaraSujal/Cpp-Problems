// 4.

#include <iostream>
using namespace std; 

void check(char ch){
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        cout << "Vowels";
    }else{
        cout << "Consonants";
    }
}


int main() {
    check('r');

    return 0;
}
