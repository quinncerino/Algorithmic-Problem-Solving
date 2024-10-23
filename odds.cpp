#include<iostream>
using namespace std;
int main()
{
    int sum(0), i(1);
    while (i < 100)
    {
        sum += i;
        i += 2;
    }
    cout << "The sum of all odd numbers less than 100 is " << sum;
}