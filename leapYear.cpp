#include<iostream>
using namespace std;
int main()
{
    int year;
    //user inputs value for year
    cout << "Enter a 4-digit number for year: ";
    cin >> year;
    
    //checks if last two digits of the year are 00
    if (year % 100 == 00)
    {
        if (year % 400 == 0) //checks if the year is evenly divisible by 400
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }
    else
    {
        if (year % 4 == 0) //checks if the year is evenly divisible by 4
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }
}