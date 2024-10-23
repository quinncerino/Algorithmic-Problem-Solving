#include<iostream>
using namespace std;
int main()
{
    int number(1), sum(0), count(0), between(0), negative(0);

    cout << "Enter a series of integers. Enter 0 to stop. " << endl;


    while (number != 0)
    {
        cin >> number;
        sum += number;
        if (number != 0)
        {
            count ++;
        }
        if (number >= 1 && number <= 100)
        {
            between ++;
        }
        else if (number < 0)
        {
            negative ++;
        }
    }
    cout << "The number of integers entered is " << count << ". " 
        << between << " of them are between 1 to 100, and " 
        << negative << " of them are negative. The average is " << (double)sum / count << endl;
}