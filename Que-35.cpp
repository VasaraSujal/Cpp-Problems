// 35.

// 1st Method

#include <iostream>
using namespace std;

void PrintInvertedTriangle(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout << "*";
        }
    cout << endl;
    }
}

int main(){
    int rows = 6;
    PrintInvertedTriangle(rows);
    return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 3rd Method

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << string(n - i, '*') << endl;
//     }

//     return 0;
// }