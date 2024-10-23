#include<iostream>
using namespace std;
int main()
{
    int i = 0, sum = 0;
    while (i <= 20)
    {
        i++;
        
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
}