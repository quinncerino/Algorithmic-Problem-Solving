#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter a whole number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is an even number." << endl;
    }
    else 
    {
        cout << number << " is an odd number." << endl;
    }
    return 0;
}