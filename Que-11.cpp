// 11.

#include <iostream>
using namespace std;

void duplicate(){
    int arr[] = {1,2,2,3,4,4,5};
    int arr2[7];
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]!=arr[i+1]){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    duplicate();
    return 0;
}