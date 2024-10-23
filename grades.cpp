#include<iostream>
using namespace std;
int main()
{
    double grades[15];
    cout << "Enter 15 grades: " << endl;

    for (int i = 0; i < 15; i++)
    {
        cin >> grades[i];
    }



    double largest = grades[0];

    for (int i = 1; i < 15; i++)
    {
        if (grades[i] > largest)
        {
            largest = grades[i];
        }
    }
    cout << "The highest grade is " << largest << endl;
}