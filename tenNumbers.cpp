#include<iostream>
using namespace std;
int main()
{
    int number, sum(0), evens(0), i(1);
    cout << "Enter 10 numbers: ";
    while (i <= 10)
    {
        cin >> number;
        sum += number;
        if (number % 2 == 0)
        {
            evens += 1;
        }
        i += 1;
    }
    cout << "The sum of these numbers is " << sum << " and " << evens << " of these numbers are even.";

}