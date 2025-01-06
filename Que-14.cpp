// 14.

// 1st Method

#include <iostream>
using namespace std;

void Array(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    
    int newsize=n+1;
    int newarr[newsize];
    
    int temp=0;
    
    newarr[0]=temp;
    
    for(int i=0;i<n;i++){
        newarr[i+1]=arr[i];
    }
    
    for(int i=0;i<newsize;i++){
        cout<<newarr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Array();
    return 0;
}

// 2nd Method

// #include <iostream>
// using namespace std;

// void AddElement(int arr[], int size, int newElement){
//     int newsize = size + 1;
//     int newarr[newsize];
    
//     newarr[0] = newElement;
//     for(int i=0;i<size;i++){
//         newarr[i+1] = arr[i];
//     }
//     for(int i=0;i<newsize;i++){
//         cout << newarr[i] << "\n";
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(int);
//     int newElement = 0;
//     AddElement(arr,size,newElement);
//     return 0;
// }

// 3rd Method

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int newsize=size+1;

//     int arr2[newsize];
//     arr2[0]=0;
//     for(int i=0;i<newsize;i++){
//         arr2[i+1]=arr[i];
//         cout<<arr2[i]<< " ";
//     }
//     return 0;
// }