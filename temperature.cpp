#include<iostream>

using namespace std;
 int main()
 {
    double tempF, tempC;
    cout << "Enter a number for temperature in degrees Fahrenheit: " << endl;
    cin >> tempF;
    tempC = (tempF - 32) * 5 / 9;
    cout << "This temperature is equivalent to " << tempC << " degrees Celcius." << endl;

    return 0;
 }