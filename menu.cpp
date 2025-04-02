#include<iostream>
using namespace std;


void displayMenu()
{
    cout << "******** Welcome ********" << endl << "Please choose from the menu:" << endl << "A: Addition" << endl << "S: Subtraction" << endl << "M: Multiplication" << endl << "D: Division" << endl;
    return;
}


bool isValid(char operation)
{
    if (operation == 'A' || operation == 'a' || operation == 'S' || operation == 's' || operation == 'M' || operation == 'm' || operation == 'D' || operation =='d')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void calculate(int n1, int n2, char operation)
{
    switch(operation)
    {
        case 'A':
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case 'a':
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case 'S':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case 's':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case 'M':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case 'm':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case 'D':
            cout << n1 << " / " << n2 << " = " << (double)n1 / n2;
            break;
        case 'd':
            cout << n1 << " / " << n2 << " = " << (double)n1 / n2;
            break;
    }
}


int main()
{
    char operation;
    int num1, num2;

    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;

    displayMenu();
    cout << "Enter your choice of operation: ";
    cin >> operation;
    if (isValid(operation))
    {
        calculate(num1, num2, operation);
    }
    else
    {
        cout << "Invalid operation choice";
    }
}