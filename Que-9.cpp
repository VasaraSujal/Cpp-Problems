// 9.

// 1st Method

#include <iostream>
using namespace std;

void sort(){
    int arr[] = {1,6,5,2,3};
    int size = sizeof(arr)/sizeof(int);
    int i,j;
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main() {
    sort();

    return 0;
}

// 2nd Method

#include <iostream>
#include <algorithm>
using namespace std;

void Sortarr(int arr[], int size){
    sort(arr, arr+size);
}

int main() {
    int arr[] = {4,2,8,5,1};
    int size = sizeof(arr)/sizeof(int);
    Sortarr(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << "\n";
    }
    return 0;
}