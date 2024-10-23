#include<iostream>
using namespace std;
int main()
{
    int sum(0), number, i(0);
    cout << "Enter a number value: ";
    cin >> number;

    while (i <= number)
    {
        sum += i;
        i+= 1;
    }

    cout << "The sum of all positive integers less than or equal to " << number << " is " << sum;
}