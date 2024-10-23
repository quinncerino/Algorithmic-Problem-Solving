#include<iostream>
using namespace std;
int main()
{
    double balance(1000);
    int years(0);

    while (balance < 2000)
    {
        balance = 1.05 * balance;
        years += 1;
    }

    cout << "It takes " << years << " years to double the balance.";


}