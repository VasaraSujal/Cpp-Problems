// 32.

// 1st Method

#include <iostream>
using namespace std;
 
int main(){
    int age = 17;
    if(age<13){
        cout << "Child";
    }else if(age<=19 && age>=13){
        cout << "Teenager";
    }else if(age<=59 && age>=20){
        cout << "Adult";
    }else if(age>=60){
        cout << "Senior";
    }else {
        cout << "Invalid age";
    }
    return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int age = 17;
//     int temp;
//     if(age<13){
//         temp =  0;
//     }else if(age<=19 && age>=13){
//         temp =  1;
//     }else if(age<=59 && age>=20){
//         temp =  2;
//     }else if(age>=60){
//         temp =  3;
//     }else {
//         temp =  4;
//     }

//     switch (temp){
//         case 0:
//             cout << "Child" << endl;
//             break;
//         case 1:
//             cout << "Teenager" << endl;
//             break;
//         case 2:
//             cout << "Adult" << endl;
//             break;
//         case 3:
//             cout << "Senior" << endl;
//             break;
//         default:
//             cout << "InvalidAge" << endl;
//             break;
//     }

//     return 0;
// }

// 3rd Method

// #include <iostream>
// #include <string>
// using namespace std;

// string AgeCategery(int age) {
//     return (age < 13) ? "Child" :
//            (age <= 19) ? "Teenager" :
//            (age <= 59) ? "Adult" : "Senior";
// }

// int main() {
//     int age = 19;
//     cout << "Age group: " << AgeCategery(age) << endl;
//     return 0;
// }