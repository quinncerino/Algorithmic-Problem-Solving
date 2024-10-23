#include<iostream>
using namespace std;
int main()

{
    int total, quarters, dimes, nickels, pennies, remaining;
    cout << "Enter whole number total amount of cents: " << endl;
    cin >> total;

    quarters = total / 25;
    remaining = total % 25;

    dimes = remaining / 10;
    remaining = remaining % 10;

    nickels = remaining / 5;
    remaining = remaining % 5;

    pennies = remaining / 1;
    
    cout << "The machine will give " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies. " << endl;
    
    return 0;

}