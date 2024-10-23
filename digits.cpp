#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number that has no more than four digits: ";
    cin >> number;
    if (number >= 0 && number <= 9)
    {
        cout << "This number has one digit.";
    }
    else if (number >= 10 && number <= 99)
    {
        cout << "This number has two digits.";
    }
    else if (number >= 100 && number <= 999)
    {
        cout << "This number has three digits.";
    }
    else if (number >= 1000 && number <= 9999)
    {
        cout << "This number has four digits.";
    }
    return 0;
}
