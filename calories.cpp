#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char gender;
    double weight, height, chocBars, calories;
    int age;

    cout << "Enter the gender, M for male, and F for female: ";
    cin >> gender;
    
    cout << "Enter the weight (pounds): ";
    cin >> weight;

    cout << "Enter the height (inches): ";
    cin >> height;

    cout << "Enter the age: ";
    cin >> age;

    if (gender == 'F')
    {
        calories = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);

    }

    if (gender == 'M')
    {
        calories = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    }

    chocBars = calories / 230;
    cout << "You can eat " << chocBars << " chocolate bars!";
    
    return 0;
}