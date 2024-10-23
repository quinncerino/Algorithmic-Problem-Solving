#include<iostream>
using namespace std;

int main()
{
    double totalPerPerson, bill, tip;
    int numPeople;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter a number value for the total bill: " << endl;
    cin >> bill;
    cout << "Enter a number value for the total number of people: " << endl;
    cin >> numPeople;
    cout << "Enter a number value for the total tip percentage: " << endl;
    cin >> tip;

    totalPerPerson = (bill * ((tip/100) + 1)) / numPeople;
    cout << "The total per person is $" << totalPerPerson << endl;

    return 0;
}