// 34.

// 1st Method

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
     cout << "[" << arr[0] << ", " << arr[4] << "]" << endl;
     return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "[" << arr[0] << ", " << arr[n-1] << "]" << endl;

//     return 0;
// }

// 3rd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(i == 0 || i == n-1){
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }