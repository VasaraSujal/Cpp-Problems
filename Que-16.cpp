// 16.

#include <iostream>
using namespace std;

void Positive(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            count += 1;
        }
    }
    if(count == size){
        cout << "True" << "\n";
    }else{
        cout << "false" << "\n";
    }
}


int main() {
    Positive();
    return 0;
}
