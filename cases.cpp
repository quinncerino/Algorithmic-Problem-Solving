#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << "uppercase\n";
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        cout << "lowercase\n";
    }
    else
    {
        cout << "not a letter\n";
    }
return 0;
}