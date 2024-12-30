// 7.

#include <iostream>
using namespace std;

void TrafficLight(string Light){
    if(Light=="red"){
        cout << "Stop";
    }else if(Light=="Yellow"){
        cout << "Slow down";
    }else{
        cout << "Go";
    }
}

int main() {
    TrafficLight("red");    

    return 0;
}