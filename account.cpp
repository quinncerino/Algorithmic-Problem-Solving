#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double balance, due, minPayment;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter the account balance: ";
    cin >> balance;

    if (balance >= 1000)
    {
        due = 1000 * 1.015;
        due += (balance - 1000) * 1.01;
    }
    else
    {
        due = balance * 1.015;
    }

    if (due <= 10)
    {
        minPayment = due;
    }
    else
    {
        if (10 >= (due * 0.10))
        {
            minPayment = 10;
        }
        else
        {
            minPayment = 0.10 * due;
        }
    }
    cout << "The total amount due is " << due << " and the minimum payment is " << minPayment;

    return 0;
}