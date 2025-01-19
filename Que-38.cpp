// 38.

#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius=0;
    float fahrenheit = celsiusToFahrenheit(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}