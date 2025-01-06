// 23.

// 1st Method

#include <iostream>
using namespace std;

string Concate(string str1, string str2){
    return str1 + str2;
}

int main() {
    string str1 = "Hello ";
    string str2 = "World";
    cout << Concate(str1,str2) << "\n";
    return 0;
}

// 2nd Method

// #include <iostream>
// #include <string>
// using namespace std;

// void Concate(string str1, string str2){
//     str1.append(str2);
//     cout << str1 << endl;
// }

// int main(){
//     string str1 = "Hello";
//     string str2 = " World!";
//     Concate(str1, str2);
//     return 0;
// }

// 3rd Method

// #include <iostream>
// #include <cstring>
// using namespace std;

// void Concate(string str1, string str2){
//     strcat(str1,str2);
// }

// int main(){
//     string str1 = "Hello";
//     string str2 = " World!";
//     Concate(str1, str2);
//     return 0;
// }