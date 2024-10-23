#include<iostream>
using namespace std;
int main()
{
    int a[6] = {20, 39, 70, 19, 10, 89};

    bool tens = false;

    for(int i = 0; i < 6; i++)
    {
        if (a[i] == 10)
        {
            cout << "contains 10" << endl;
            tens = true;
            break;
        }
    }
    
    if (tens == false)
    {
        cout << "does not contain 10" << endl;
    }
}