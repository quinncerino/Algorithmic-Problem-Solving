#include<iostream>
using namespace std;
int main()
{
    int age;
    double height, weight, BMR;
    char gender;

    cout << "Enter the corresponding gender letter (F or M): ";
    cin >> gender;
    
    cout << "Enter the weight (pounds): ";
    cin >> weight;

    cout << "Enter the height (inches): ";
    cin >> height;

    cout << "Enter the age: ";
    cin >> age;

    switch(gender)
    {
        case 'F':
        case 'f':
            BMR = 655 + (4.3 * weight) + 4.7 * height - 4.7 * age;
            break;

        case 'M':
        case 'm':
            BMR = 66 + 6.3 * weight + 12.9 * height - 6.8 * age;
            break;

        default:
            cout << "Wrong gender character";
            break; 

    }
    cout << "You can eat " << BMR;
}