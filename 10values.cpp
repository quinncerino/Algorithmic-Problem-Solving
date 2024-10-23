#include<iostream>
using namespace std;
int main()
{
    
    int num, sum(0);
    /*
    cout << "Enter ten numbers: " << endl;
    while (i <= 10)
    {
        cin >> num;
        sum += num;
        i++;
    }
    cout << "The sum is " << sum;
*/

    cout << "Enter ten numbers: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << "The sum is " << sum;



}   