// 10.

#include <iostream>
using namespace std;

void count(){
    int EvenCount=0;
    int OddCount=0;
    
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            EvenCount+=1;
        }else{
            OddCount+=1;
        }
    }
    cout << "EvenCount : " << EvenCount << "\n";
    cout << "OddCount : " << OddCount << "\n";
    
}

int main() {
    count();

    return 0;
}
