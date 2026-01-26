#include <iostream>
#include "tempreture.h"
using namespace std;

int main()
{
    Temperature obj;
    double value;
    char unit;

    cout << "Enter temperature value: ";
    cin >> value;

    cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;

    obj.setTemperature(value);

    if(unit == 'C' || unit == 'c')
    {
        cout << "Temperature in Fahrenheit = "
             << obj.celsiusToFahrenheit() << endl;
    }
    else if(unit == 'F' || unit == 'f')
    {
        cout << "Temperature in Celsius = "
             << obj.fahrenheitToCelsius() << endl;
    }
    else
    {
        cout << "Invalid unit entered!" << endl;
    }

    return 0;
}
