#include<iostream>
using namespace std;
int main()
{
    char grade;
    //user inputs a character for the letter grade
    cout << "Enter a letter grade A, B, C, D, or F: ";
    cin >> grade;

    switch(grade)
    {
        case 'A': //executed if the character is A
            cout << "Excellent";
            break;
        case 'B': //executed if the character is B
            cout << "Good";
            break;
        case 'C': //executed if the character is C
            cout << "Average";
            break;
        case 'D': // executed if the character is D
            cout << "Poor";
            break;
        case 'F': //executed if the character is F
            cout << "Failing";
            break;
    }
}