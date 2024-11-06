#include<iostream>

using namespace std;

void greeting (int hour)
{
    if (hour < 12)
    {
        cout << "Good morning";
    }
    else if (hour >= 12 && hour < 18)
    {
        cout << "Good afternoon";
    }
    else
    {
        cout << "Good night";
    }
}

int main()
{
    int hour;
    cout << "Enter the hour: ";
    cin >> hour;
    greeting(hour);
}