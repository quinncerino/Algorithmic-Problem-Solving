#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int sum(0);
    for (int num = 1; num <= 20; num++)
    {
        sum += pow(num, 2);
    }
    cout << "The sum is " << sum;
}