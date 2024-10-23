#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << " ";

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else 
        {
            n = 3 * n + 1;
            cout << n << " ";
        }
    }
    cout << endl << "We have successfully reached " << n;
}