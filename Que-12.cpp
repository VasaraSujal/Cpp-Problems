// 12.

#include <iostream>
using namespace std;

int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int arr2[n+1];
for(int i=0;i<n+1;i++){
    if(i==n){
        arr2[i]=6;
    }else{
        arr2[i]=arr[i];
    }
    cout << arr2[i]<<endl;
}
return 0;
}