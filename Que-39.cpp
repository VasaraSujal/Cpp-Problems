// 39.

#include <iostream>
#include <string>
using namespace std;

void CheckBracket(string str){
    int openBracket = 0;
    int closeBracket = 0;
    for(int i=0;i<str.length();i++){
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            openBracket++;
        }
        // Count closing brackets
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            closeBracket++;
        }
    }
    if(openBracket == closeBracket){
        cout << "true" << endl;
    }else{
        cout << "False" << endl;
    }
}

int main(){
    string str = "{[()]}";
    CheckBracket(str);
    return 0;
}
