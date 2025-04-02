#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s1, s2;

    cout << "Enter two strings: " << endl;

    getline(cin, s1);

    getline(cin, s2);



    //using string function
    if (s1.find(s2) != string::npos)
    {
        cout << s2 << " is a substring of " << s1;
    }
    else
    {
        cout << s2 << " is not a substring of " << s1;
    }

    cout << endl;


    //not using string function
    int s1Count = 0, s2Count = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1Count++;
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        s2Count++;
    }

    int index, times = 0, length = 0;
    int correct = 0;

    for (int j = 0; j < s2Count; j++)
    {
        for (int i = 0; i < s1Count; i++)
        {
            if (s2[j] == s1[i])
            {
                if (times == 0)
                {
                    index = j;
                    times ++;
                    length++;
                    correct ++;

                }
                else
                {
                    if (j == index + 1)
                    {
                        correct++;
                        length++;
                        index = j;

                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    if (length == s2Count && correct == length)
    {
        cout << s2 << " is a substring of " << s1;
    }
    else
    {
        cout << s2 << " is not a substring of " << s1;
    }

    cout << endl;
}