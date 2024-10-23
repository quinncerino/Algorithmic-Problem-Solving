#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double price, finalPrice;
    cout << "What is the total price? ";
    cin >> price;
    if (price >= 50 && price < 75)
    {
        finalPrice = price - 10;
    }
    else if (price >= 75 && price < 100)
    {
        finalPrice = price - 20;
    }
    else if (price >= 100)
    {
        finalPrice = price - 30;
    }

    cout << "The final price after discount is " << finalPrice;

    return 0;
}