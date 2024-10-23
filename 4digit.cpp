#include<iostream>
using namespace std;
int main()
{
    int i(1000), sum(0), digit1, digit2, digit3, digit4;
    while (i <= 9999)
    {
        if (i % 2 == 1)
        {
            digit1 = i % 10;
            digit2 = (i / 10) % 10;
            digit3 = (i / 100) % 10;
            digit4 = (i / 1000) % 10;
            if (digit1 + digit2 + digit3 + digit4 == 27)
            {
                cout << "The smallest 4-digit odd number whose digits add up to 27 is " << i;
                break;
            }
            else
            {
                i += 1;
            }
        }
        else
        {
            i += 1;
        }
    }
}