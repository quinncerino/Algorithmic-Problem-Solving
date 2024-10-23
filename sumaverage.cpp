#include<iostream>
using namespace std;
int main()
{
    int i(3), sum(0), average(0), amount(0);
    while (i <= 100)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            amount += 1;
            sum += i;
        }
        i += 1;
    }
    average = (double)sum / amount;
    cout << "The sum is " << sum << " and the average is " << average;
}