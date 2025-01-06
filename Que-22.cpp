// 22.

// 1st Method

#include <iostream>
#include <string>
using namespace std;

void Length(string str){
    int len = str.length();
    cout << len << "\n";
}

int main() {
    string str= "Hello, World!";
    Length(str);
    return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// void FindLength(string str){
//     int count = 0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;
//     }
//     cout << count << endl;
// }

// int main(){
//     string str = "Hello";
//     FindLength(str);
//     return 0;
// }

// 3rd Method

// #include <iostream>
// #include <iterator> // For std::distance
// using namespace std;

// int FindLength(string str){
//     return distance(str.begin(), str.end());
// }

// int main(){
//     string str = "Hello";
//     cout << FindLength(str) << endl;
//     return 0;
// }