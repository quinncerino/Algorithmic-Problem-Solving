#include<iostream>
#include<cmath>

using namespace std;

int main()

{
    double xVal, yVal, distance;
    cout << "Enter 2 values for a point: " << endl;
    cin >> xVal >> yVal;

    distance = sqrt(pow(xVal, 2) + pow(yVal, 2));
    cout << "The distance between this point and (0,0) is " << distance;
    return 0;
}

