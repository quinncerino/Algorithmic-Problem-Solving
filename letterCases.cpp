#include<iostream>

using namespace std;


int cases(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << "This letter is uppercase." << endl;
        return 0;
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        cout << "This letter is lowercase" << endl;
        return 0;
    }
}


int main()
{
    char letter;

    cout << "Enter a letter: " << endl;
    cin >> letter;

    cases(letter);

    return 0;

}