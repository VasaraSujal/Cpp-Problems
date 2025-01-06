// 20.

#include <iostream>
using namespace std;

void Difference(){
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int j=0;j<size;j++){
        if(min>arr[j]){
            min = arr[j];
        }
    }
    cout << "Minimum: " << min << "\n";
    cout << "Maximum: " << max << "\n";
    cout << "Difference: " << max - min << "\n";
}

int main() {
    Difference();
    return 0;
}
