// 30.


#include <iostream>
using namespace std;

void SumOfEvenOdd (int num) {
    int rev = 0;
    int EvenCount = 0;
    int OddCount = 0;
    while(num!=0){
        rev = rev * 10 + num%10;
        if(rev%2==0){
            EvenCount ++;
        }else{
            OddCount ++;
        }
        num = num/10;
    }
    cout << "EvenCount: " << EvenCount << endl;
    cout << "OddCount: " << OddCount << endl;
}

int main(){
    int num = 111111;
    SumOfEvenOdd (num);
    return 0;
}