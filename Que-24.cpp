// 24.

// 1st Method

#include <iostream>
#include <cctype> 
using namespace std;

string RemoveSpace(string str){
    int start = 0;
    int end = str.length() - 1;

    while(start <=end && isspace(str[start])){
        start ++;
    }
    while(end >=start && isspace(str[end])){
        end --;
    }
    return str.substr(start, end - start + 1);
}

int main(){
    string str = "  Hello  ";
    cout << RemoveSpace(str);
    return 0;
}

// 2nd Method

// #include <iostream>
// #include <string> 
// using namespace std;

// string RemoveSpace(string str){
//     string str2="";
//     int size = str.length();
//     for(int i=0;i<size;i++){
//         if(str[i] != ' '){
//             str2 += str[i];
//         }
//     }
//     return str2;
// }

// int main (){
//     string str = "  Hello  ";
//     // cout << str << endl;
//     cout << RemoveSpace(str);
//     return 0;
// }
