#include<iostream>
using namespace std;
int main()
{
    int product(1), n, i(1);
    cout << "Enter an integer value for n: ";
    cin >> n;

    while (i <= n)
    {
        product *= i;
        i += 1;
    }

    cout << "The product of all positive integers less than or equal to " << n << " is " << product;    
}