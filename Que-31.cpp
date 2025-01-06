// 31.

// 1st Method

// #include <iostream>
// #include <string>
// using namespace std;

// void Repeat (string str, int target) {
//     string str2 = "";
//     for(int i=0;i<target;i++){
//         str2 += str;
//     }
//     cout << str2 << endl;
// }

// int main () {
//     string str = "abc";
//     int target = 5;
//     Repeat (str,target);
//     return 0; 
// }

// 2nd Method

#include <iostream>  
#include <sstream>  
using namespace std;

string repeatString(string str, int target) {
    stringstream temp;
    for (int i = 0; i < target; i++) {
        temp << str;
    }
     return temp.str();
}

int main(){
    string str = "Hello";
    int target = 4;
    cout << repeatString(str,target) << endl;
    return 0;
}