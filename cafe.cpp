#include<iostream>
using namespace std;
int main()
{
    int coffee, smoothie, croissant, cupcake;
    double coffeePrice (4.99), smoothiePrice (5.99), croissantPrice (6.99), cupcakePrice (6.99), totalPrice, tax;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Welcome to Quinn's Cafe" << endl;
    cout << "~ Menu ~" << endl;
    cout << "coffee:  $" << coffeePrice << endl;
    cout << "smoothie:  $" << smoothiePrice << endl;
    cout << "croissant:  $" << croissantPrice << endl;
    cout << "cupcake:  $" << cupcakePrice << endl;

    cout << "Enter the number of coffees you'd like to order: ";
    cin >> coffee;

    cout << "Enter the number of smoothies you'd like to order: ";
    cin >> smoothie;

    cout << "Enter the number of croissants you'd like to order: ";
    cin >> croissant;

    cout << "Enter the number of cupcakes you'd like to order: ";
    cin >> cupcake;

    totalPrice = (coffee * coffeePrice) + (smoothie * smoothiePrice) + (croissant * croissantPrice) + (cupcake * cupcakePrice);
    cout << "Your total bill amount (before tax) is $" << totalPrice << endl;

    tax = totalPrice * 0.02;
    cout << "Tax amount: $" << tax << endl;

    cout << "Your total amount: $" << totalPrice + tax;

    return 0;
}