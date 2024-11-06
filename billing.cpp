#include<iostream>

using namespace std;


double cost(int hours, int minutes)
{
    int totalTime = (hours * 60) + minutes;

    double totalCost = (totalTime / 15) * 150;

    return totalCost;

}

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    cout << "The total cost is " << cost(hours, minutes);
}