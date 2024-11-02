#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int i = 0, count = 0, upper = 0;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << s << endl;

    while (s[i] != '\0')
    {
        count++;

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        
        i++;
    }
    cout << "The length of the array is " << count << endl
    << "The number of uppercase letters is " << upper << endl;


}