// 19.

#include <iostream>
using namespace std;

bool IsSorted(int arr[], int size){
     for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {       
            return false;                 
        }
    }
    return true;
}

int main (){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool Answer = IsSorted(arr, size);
    if (Answer) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}