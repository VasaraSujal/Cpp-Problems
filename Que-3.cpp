// 3.

#include <iostream>
using namespace std;

void Triangle(int side1, int side2, int side3){
    if(side1==side2 && side2==side3){
        cout << "Equilateral";
    }else if(side1==side2 || side2==side3){
        cout << "Isosceles";
    }else{
        cout << "Scalene";
    }
}

int main() {
    Triangle(90, 90, 90);

    return 0;
}