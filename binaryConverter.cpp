#include<iostream>
using namespace std;
int main()
{
    int binaryNumber, decimalNumber, firstDigit, secondDigit, thirdDigit, fourthDigit;
    cout << "Enter a 4-digit binary number: " << endl;
    cin >> binaryNumber;
    
    fourthDigit = binaryNumber % 10;

    binaryNumber = binaryNumber / 10;
    thirdDigit = binaryNumber % 10;

    binaryNumber = binaryNumber / 10;
    secondDigit = binaryNumber % 10;

    binaryNumber = binaryNumber / 10;
    firstDigit = binaryNumber % 10;

    decimalNumber = (fourthDigit * 1) + (thirdDigit * 2) + (secondDigit * 4) + (firstDigit * 8);

    cout << "This binary number is equivalent to the decimal value of " << decimalNumber;

}