// 27

// #include <iostream>
// #include <string>
// using namespace std;

// void extension (string str) {
//     int n = str.size();
//     string str2 = "";
//     for(int i=n-1;str[i]!='.';i--){
//         str2 += str[i];
//     }
//     int n2 = str2.size();
//     for(int j=n2-1;j>=0;j--){
//         cout << str2[j] ;
//     }
// }

// int main () {
//     string str = "index.css";
//     extension (str);
//     return 0;
// }


// 2nd Method

#include <iostream>
#include <string>
using namespace std;

void extension (string str) {
    int n = str.size();
    string str2 = "";
    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            for(int j=i+1;j<n;j++){
                str2 += str[j];
            }
        }
    }
    cout << str2 ;
}

int main () {
    string str = "index.js";
    extension (str);
    return 0;
}