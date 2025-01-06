// 21.

// 1st method

#include <iostream>
#include <string>
using namespace std;

void UpperCase(){
    string str = "hello";
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    cout << str << "\n";
}

int main() {
    UpperCase();
    return 0;
}

// 2nd Method

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// void UpperCase(string str){
//     for(int i=0;i<str.length();i++){
//         str[i] = toupper(str[i]);
//     }
//     cout << str << endl;
// }

// int main(){
//     string str = "Hello";
//     UpperCase(str);
//     return 0;
// }

// 3rd Method

// #include <iostream>
// #include <algorithm> // For transform
// #include <cctype>    // For toupper
// using namespace std;

// string UpperCase(string str){
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
//     return str;
// }

// int main(){
//     string str = "hello";
//     cout << UpperCase(str);
//     return 0;
// }
