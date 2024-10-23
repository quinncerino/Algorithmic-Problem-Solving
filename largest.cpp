#include<iostream>
using namespace std;
int main()
{
    double num, largest, smallest, secondLargest;
    int assigned(0), i;
    cout << "Enter 10 numbers: " << endl;
    for (i = 1; i <= 10; i++)
    {
        cin >> num;
        if (i == 1)
        {
            largest = num;
            smallest = num;
        }
        else
        {
            if (num > largest)
            {
                secondLargest = largest;
                assigned += 1;
                largest = num;
            }
            if (num < smallest)
            {
                smallest = num;
            }
            if (num < largest)
            {
                if (assigned > 0)
                {
                    if (num > secondLargest)
                    {
                        secondLargest = num;
                    }
                }
                else
                {
                    secondLargest = num;
                    assigned += 1;
                }
            }
        }
    }
    cout << "The largest value is " << largest << endl;
    cout << "The smallest value is " << smallest << endl;
    cout << "The second largest value is " << secondLargest << endl;
}