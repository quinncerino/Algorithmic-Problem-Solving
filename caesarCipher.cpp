#include<iostream>
#include<string>

using namespace std;

int main()
{
    string message;
    int shift, extra, i = 0;
    char letter;
    cout << "Enter a message: ";
    getline(cin, message);
    cout << message << endl;

    cout << "Enter the shift: ";
    cin >> shift;

    while (message[i] != '\0')
    {
        letter = message[i];
        

        if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
        {
            letter = letter + shift;
            
            message[i] = letter;
            
        }
        i++;
    }
    cout << message;

}