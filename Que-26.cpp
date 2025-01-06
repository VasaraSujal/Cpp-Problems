// 26.

#include <iostream>
using namespace std;

void MatchLastChar(string str, char ch){
    int size = str.length();
    if(str[size-1] == ch){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}

int main(){
    string str = "Codinggita";
    char ch = 'a';
    MatchLastChar(str, ch);
    return 0;
} 