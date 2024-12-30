// 1.

#include <iostream>
using namespace std;

int Score(int number){
    if(number>=90 && number <=100){
        cout << "A Grade";
    }else if(number>=80 && number<90){
        cout << "B Grade";
    }else if(number>=70 && number<80){
         cout << "C Grade";
    }else if(number>=60 && number<70){
         cout << "D Grade";
    }else if(number>=0 && number<60){
        cout << "F Grade";
    }else{
        cout << "Invalid Score";
    }
    return 0;
}

int main() {
    Score(95);
    return 0;
}