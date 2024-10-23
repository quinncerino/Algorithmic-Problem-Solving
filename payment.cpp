#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double hours, payRate(16.78), payment;
    double overtimeRate = 16.78 * 1.5;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    if (hours > 40)
    {
        payment = 40 * payRate;
        payment += ((hours - 40) * overtimeRate);
    }
    else
    {
        payment = hours * payRate;
    }
    cout << "The payment is " << payment;
}