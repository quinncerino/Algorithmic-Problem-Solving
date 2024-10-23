/* CSCI 1010 Section 001
 * Lab week 9 - 1
 * Fibonacci
 * Author: Quinn Cerino
 * Date: October 16, 2024
*/


#include<iostream>
using namespace std;
int main()
{
    int i = 0, P1 = 1, P2 = 1, current;

    while (i < 20)
    {
        if (i == 0)
        {
            cout << P1 << endl; //we're given that F0 = 1
            i++;
        }
        else if (i == 1)
        {
            cout << P2 << endl; //we're given that F1 = 1
            i++;
        }
        else
        {
            current = P1 + P2; //adds previous 2 values
            cout << current << endl;
            P1 = P2; // reassigns/updates previous 2 values for every iteration
            P2 = current;
            i++;
        }
    }

}