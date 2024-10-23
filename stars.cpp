#include<iostream>
using namespace std;
int main()
{
    int i(1);
    string star = "*", stars = "";

    while (i <= 10)
    {
        stars += star;
        cout << stars << endl;
        i += 1;
    }
}