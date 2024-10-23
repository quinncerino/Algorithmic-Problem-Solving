#include<iostream>
using namespace std;
int main()
{
    double sum(0), i(1);
    while (i <= 100)
    {
        sum += (1/i);
        i += 1;
    }
    cout << sum;
}