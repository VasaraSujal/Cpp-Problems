// 18.

#include <iostream>
using namespace std;

void Even(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i=i+2){
        cout << arr[i] << " ";
    }
}

int main() {
    Even();
    return 0;
}
