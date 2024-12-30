// 2.

#include <iostream>
#include <string>
using namespace std;

int Score(int number){
    if(number<0){
        cout << "Negative";
    }else if(number>0){
        cout << "Positive";
    }else{
        cout << "Zero";
    }
    return 0;
}

int main() {
    Score(95);
    return 0;
}