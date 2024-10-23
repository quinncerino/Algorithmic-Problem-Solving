#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char degree;
    double number, temp;
    cout << "Enter a number for temperature: ";
    cin >> number;
    cout << "Enter C for converting to Fahrenheit to Celsius, or F for converting Celsius to Fahrenheit: ";
    cin >> degree;
    
    if (degree == 'F')
    {
        temp = (9 * number) / 5 + 32;
        cout << "The temperature in degrees Fahrenheit is " << temp;
    }
    if (degree == 'C')
    {
        temp = 5 * (number - 32) / 9;
        cout << "The temperature in degrees Celsius is " << temp;
    }
    return 0;
}