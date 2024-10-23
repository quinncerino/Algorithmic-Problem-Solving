#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double temp, windSpeed, windChill;
    cout << "Enter the temperature and the wind speed: ";
    cin >> temp >> windSpeed;
    
    windChill = 35.74 + (0.6215 * temp) + ((0.4275 * temp) - 35.75) * pow(windSpeed, 0.16);

    cout << "The wind chill is " << windChill;
    return 0;
}