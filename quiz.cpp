#include<iostream>
using namespace std;

int main()
{
    char symbol[3] = {'a', 'b', 'c'};

    for(int index = 0; index < 3; index++)
    {
        cout << symbol[index];
    }


    //int number = 14;
    //cout << &number;

    short x = 65535;
    cout << (x + 1);
}