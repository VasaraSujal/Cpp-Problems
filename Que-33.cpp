// 33.

// 1st Method

#include <iostream>
using namespace std;

int main () {
    int year = 2500;
    if (year % 100 == 0) {
        cout << year << " is a Century Year." << endl;
    }else {
        cout << year << " is not a Century Year." << endl; 
    }
    return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int year = 2500;
//     (year % 100 == 0) ? cout << year << " is a Century Year." << endl 
//                       : cout << year << " is not a Century Year." << endl;
//     return 0;
// }

// 3rd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int year = 2590;
//     switch(year%100){
//         case 0:
//             cout << year << " is a Century Year." << endl;
//             break;
        
//         default:
//              cout << year << " is not a Century Year." << endl;
//             break;
//     }
//     return 0;
// }