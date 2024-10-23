#include<iostream>
using namespace std;
int main()
{
    //user inputs the time of the start and end of the call
    int startHour, startMinute, endMinute, endHour;
    double cost;
    cout << "Enter the starting hour: ";
    cin >> startHour;
    cout << "Enter the starting minute: ";
    cin >> startMinute;
    cout << "Enter the ending hour: ";
    cin >> endHour;
    cout << "Enter the ending minute: ";
    cin >> endMinute;

    //checking if the time is between 8 am and 6 pm
    if (startHour >= 8 && startHour <= 18)
    {
        cost = 0.40 * (((endHour - startHour) * 60) + (endMinute - startMinute)); 
        //cost is calculated and outputted
        cout << "The cost is $" << cost;
    }
    else
    {
        cost = 0.25 * (((endHour - startHour) * 60) + (endMinute - startMinute));
        //cost is calculated and outputted
        cout << "The cost is $" << cost;
    }
}