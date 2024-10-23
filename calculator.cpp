/* CSCI 1010 Section 001
 * Lab week 6 - 1
 * Calculator
 * Author: Quinn Cerino
 * Date: September 25, 2024
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() //overall, this program will output a math operation of two numbers of the user's choice
{
    char operation; //stores a letter character inputted by the user that will correspond to a mathematical operation
    double num1, num2; //stores two numbers inputted by the user

    cout << "********* Welcome *********\n" << "Please select from the menu\n" << "A. Addition" << endl << "B. Subtraction" << endl << "C. Multiplication" << endl << "D. Division" << endl;
    cin >> operation; //user chooses operation type

    cout << "Please enter 2 numbers: ";
    cin >> num1 >> num2; //user chooses two numbers

    if (operation == 'A' || operation == 'a') //this if statement is executed if the operation chosen is addition
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2; 
    }
    else if (operation == 'B' || operation == 'b') //this if statement is executed if the operation chosen is subtraction
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (operation == 'C' || operation == 'c') //this if statement is executed if the operation chosen is multiplication
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
    else if (operation == 'D' || operation == 'd') //this if statement is executed if the operation chosen is division
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    return 0;
}