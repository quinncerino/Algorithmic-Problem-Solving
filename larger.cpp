#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double n1, n2, larger;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        larger = n1;
    }
    else
    {
        larger = n2;
    }
    cout << "The larger number is " << larger << endl;
    return 0;
}
    
