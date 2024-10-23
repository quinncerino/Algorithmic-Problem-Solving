/* CSCI 1010 Section 001
 * Lab week 9 - 4
 * Factorials
 * Author: Quinn Cerino
 * Date: October 16, 2024
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x, j(1), n(0), sum(0), factorial(1);
    cout << "Enter a number for x: ";
    cin >> x; //user inputs x value

    while (n <= 100)
    {
        while (j <= n) //creates factorial of each n value
        {
            factorial *= j;
            j++;
        }
        sum += (pow(x,n) / factorial); //formula executed for each n value and added to sum
        n++;
    }
    cout << "The sum is " << sum;
}