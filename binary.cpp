#include<iostream>
using namespace std;
int main()
{
    long long int binary;
    int i(0), digit, dec(0);

    cout << "Enter a binary number: " << endl;
    cin >> binary;

    do
    {
        digit = binary % 10;
        dec += digit * pow(2,i);
        binary = binary / 10;
        i++;
    } while (binary != 0);

    cout << "The decimal value is " << dec;
}