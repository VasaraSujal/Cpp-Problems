// 17.

#include <iostream>
using namespace std;

void PositiveNegative(){
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr)/sizeof(int);
    int Positive = 0;
    int Negative = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            Positive += 1;
        }else{
            Negative += 1;
        }
    }
    cout << "Positive: " << Positive << "\n";
    cout << "Negative: " << Negative << "\n";
}

int main() {
    PositiveNegative();
    return 0;
}