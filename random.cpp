#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int num;
    for(int i = 0; i < 10; i++)
    {
        num = rand() % 101;
        cout << num << " ";
    }
}