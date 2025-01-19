// 40.

#include <iostream>
using namespace std;

void GenerateNumbers(int start, int end){
    for(int i=start;i<=end;i++){
        cout << i << '\t';
    }
}

int main(){
    int start = 1;
    int end = 5;
    GenerateNumbers(start, end);
    return 0;
}