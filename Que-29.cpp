// 29.

#include <iostream>
using namespace std;

void FindPairs (int target){
    int arr[] = {2,7,11,15};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                cout << "[" << i << ", " << j << "]";
            }
        }
    }
}

int main(){
    int target = 17;
    FindPairs (target);
    return 0;
}