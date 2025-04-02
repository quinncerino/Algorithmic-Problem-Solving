/* CSCI 1010 Section 001
 * Lab week 10 - 2
 * Guessing Game
 * Author: Quinn Cerino
 * Date: October 23, 2024
*/



#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    int num, guess, attempts(0);
    char repeat = 'Y';

    cout << "Welcome to the number guessing game! I have selected a number between 1 and 100." << endl << "You have 10 attempts to guess the number." << endl;

    while (repeat == 'Y' || repeat == 'y')
    {
        do
        { 
            srand(time(0)); 
            num = rand() % 101;
            for(attempts = 1; attempts <= 10; attempts++)
            {
                cout << "Guess the number: " << endl;
                cin >> guess;
                if (guess > num)
                {
                    cout << "Too high! Try again. You have " << 10 - attempts << " attempts left." << endl;
                }
                else if (guess < num)
                {
                    cout << "Too low! Try again. You have " << 10 - attempts << " attempts left." << endl;
                }
                else if (guess == num)
                {
                    cout << "Just right! You guessed the number in " << attempts << " attempts." << endl;
                    break;
                }
            }
            cout << "Would you like to play again? (Y/N)" << endl;
            cin >> repeat;
        } while (guess != num);
        
    }
}