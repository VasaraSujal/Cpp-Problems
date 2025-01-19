// 37.

// 1st Method

#include <iostream>
using namespace std;

void MatchPosition(int arr[], int size, int target){
    for (int i = 0; i <size; i++)
    {
        if(arr[i]==target){
             cout << i << '\t'; 
        }
    }
}

int main(){
    int arr[] = {1,2,3,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int target = 3;
    MatchPosition(arr, size, target);
    return 0;
}


// 2nd Method

#include <iostream>
using namespace std;

int FindFirst(int arr[], int size, int target){
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int FindLast(int arr[], int size, int target){
    for (int i = size-1; i >= 0; i--) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int first = FindFirst(arr, size, target);
    if (first == -1) {
        cout << "[-1, -1]" << endl;
    }

    int last = FindLast(arr, size, target);
    cout << "[" << first << ", " << last << "]" << endl;

    return 0;
}