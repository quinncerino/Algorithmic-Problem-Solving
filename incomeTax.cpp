/* CSCI 1010 Section 001
 * Lab week 6 - 1
 * Income Tax
 * Author: Quinn Cerino
 * Date: September 25, 2024
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() //this program will get user input for the income amount and then calculate and output the tax due
{
    double income, tax; //stores two numbers

    cout.setf(ios::fixed); //sets to 2 decimal places
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter the income: "; //user inputs amount of income
    cin >> income;

//amount of tax is calculated based on the amount of income

    if (income >= 5250) //this if statement is executed if the income is >= 5250
    {
        tax = 142.5 + 0.05 * (income - 5250); 
    }
    else if (income >= 3750)
    {
        tax = 82.5 + 0.04 * (income - 3750); //this if statement is executed if the income is >= 3750 but < 5250
    }
    else if (income >= 2250)
    {
        tax = 37.5 + 0.03 * (income - 2250); //this if statement is executed if the income is >= 2250 but < 3750
    }
    else if (income >= 750)
    {
        tax = 7.5 + 0.02 * (income - 750); //this if statement is executed if the income is >= 750 but < 2250
    }
    else if (income < 750) //this if statement is executed if the income is < 750
    {
        tax = 0.01 * income;
    }

    cout << "The tax due is " << tax; //total tax due is outputted
}