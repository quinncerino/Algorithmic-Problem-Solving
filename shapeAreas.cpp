#include<iostream>
using namespace std;
int main()
{
    int length, width;
    length = 100;
    width = 50;
    cout << "The area of the rectangle is " << length * width << " cm^2" << endl;

    int radius;
    radius = 30;
    cout << "The area of the circle is " << 3.14 * (radius * radius) << " cm^2" << endl;

    int base, height;
    base = 51;
    height = 73;
    cout << "The area of the triangle is " << (base * height) / 2 << " cm^2" << endl;

    return 0;
}