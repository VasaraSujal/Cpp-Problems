// 28.

// 1st Method

#include <iostream>
using namespace std;

void LargestNumber(int num1, int num2){
    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } else if(num1 < num2) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "Both are Equal and Value is: " << num1 << endl;
    }
}

int main () {
    int num1 = 10;
    int num2 = 20;
    LargestNumber(num1, num2);
    return 0;
}

// 2nd Method

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void LargestNumber(int num1, int num2){
//     cout << "The largest number is: " << max(num1, num2) << endl;
// }

// int main () {
//     int num1 = 10;
//     int num2 = 20;
//     LargestNumber(num1, num2);
//     return 0;
// }