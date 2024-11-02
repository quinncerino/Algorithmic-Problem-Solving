#include<iostream>
#include<cmath>

using namespace std;



double area(double radius)
{
    double area = 3.14 * pow(radius, 2);
    return area;
}


int main()
{
    double radius;
    cout << "Enter a radius: ";
    cin >> radius;
    cout << "The area is " << area(radius);
}