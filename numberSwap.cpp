#include<iostream>
using namespace std;
int main()

{
    int number, firstDigit, secondDigit;

    cout << "Enter a 2-digit whole number: " << endl;

    cin >> number;

    secondDigit = number % 10;
    
    firstDigit = number / 10;

    cout << secondDigit << firstDigit;

    return 0;
}