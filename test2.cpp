#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch(number > 1)
    {
        case true:
            cout << "yes";
            break;
        case false:
            cout << "no";
            break;
    }
}