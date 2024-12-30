// 8.

#include <iostream>
using namespace std; 

void Average(){
    int arr[] = {1,2,3,4,5};
    int sum=0;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout << sum/size<<endl;
}

int main() {
    Average();

    return 0;
}