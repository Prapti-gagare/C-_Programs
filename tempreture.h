#ifndef TEMPERATURE_H
#define TEMPERATURE_H

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

#endif
