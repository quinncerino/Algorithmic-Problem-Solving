/* CSCI 1010 Section 001
 * Lab week 9 - 2
 * Pi
 * Author: Quinn Cerino
 * Date: October 16, 2024
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i, n, pi, current;
    char repeat = 'Y';

    while (repeat == 'Y') 
    {
        i = 0;
        current = 0;
        pi = 0;
        cout << "Enter the number you want to stop at: ";
        cin >> n; //user inputs n value
        while (i <= n)
        {
            current = (pow(-1, i)) / (2 * i + 1); //executes formula for each number through n value
            pi += current; //adds each result together
            i++;
        }
        cout << "The current value is " << 4 * pi << endl; //multiplies total sum result by 4
        cout << "Do you want to restart? Y or N: ";
        cin >> repeat; //if user inputs Y, program repeats
    }
    
}