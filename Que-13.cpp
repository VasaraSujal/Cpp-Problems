// 13.

#include <iostream>
using namespace std;

void contain(){
    int arr[] = {1,2,3,4,5};
    int num = 3;
    int count = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            count += 1;
        }
    }
    if(count > 0){
        cout << "True";
    }else{
        cout << "False";
    }
}

int main(){
    contain();
    return 0;
}