/* CSCI 1010 Section 001
 * Lab week 9 - 3
 * Prime Numbers
 * Author: Quinn Cerino
 * Date: October 16, 2024
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, i(2), no(0);
    cout << "Enter an integer: ";
    cin >> num;

    while (i <= sqrt(num)) //tests every integer through the square root of num
    {
        if (num % i == 0) //if this is true, num is not prime
        {
            cout << "This number is not a prime number";
            no += 1; //adds 1 to no if the number is not prime
            break;
        }
        else
        {
            i++;
        }
    }
    if (no == 0) //no is > 0 if it's not a prime number
    {
        cout << "This number is a prime number";
    }
}