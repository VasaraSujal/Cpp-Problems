// 15.

#include <iostream>
using namespace std;

void Remove(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int arr2[size-1];
    for(int i=0;i<size-1;i++){
        arr2[i]= arr[i];
    }
    for(int i=0;i<size-1;i++){
        cout << arr2[i] << " ";
    }
}

int main() {
    Remove();
    return 0;
}
