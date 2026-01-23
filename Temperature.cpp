#include <iostream>
using namespace std;

class Temperature
{
private:
    double temp;  

public:
    void setTemperature(double t)
    {
        temp = t;
    }

    double celsiusToFahrenheit()
    {
        return 1.8 * temp + 32;
    }

    double fahrenheitToCelsius()
    {
        return (5.0 / 9.0) * (temp - 32);
    }
};

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
