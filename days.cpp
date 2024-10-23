#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int y, m, d;
    int a, b, c, dayOfWeek;

    cout << "Please enter the year: ";
    cin >> y;
    cout << "Please enter the month: ";
    cin >> m;
    cout << "Please enter the day: ";
    cin >> d;

    a = y - (14 - m) / 12;
    b = a + a / 4 - a / 100 + a / 400;
    c = m + 12 * ((14 - m) / 12) - 2;
    dayOfWeek = (d + b + (31 * c) / 12) % 7;

    cout << "The day of the week is " << dayOfWeek;
    return 0;
}