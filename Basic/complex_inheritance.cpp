#include <iostream>
using namespace std;
class Complex 
{
protected:
    float real, imag;

public:
    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

class Calculate : public Complex 
{
private:
    float r2, i2;

public:
    void getSecondComplex() {
        cout << "Enter real part of second complex number: ";
        cin >> r2;
        cout << "Enter imaginary part of second complex number: ";
        cin >> i2;
    }

    void add() 
    {
        cout << "Addition: "
             << (real + r2) << " + " << (imag + i2) << "i" << endl;
    }

    void subtract() 
    {
        cout << "Subtraction: "
             << (real - r2) << " + " << (imag - i2) << "i" << endl;
    }

    void multiply() 
    {
        float r = real * r2 - imag * i2;
        float i = real * i2 + imag * r2;
        cout << "Multiplication: " << r << " + " << i << "i" << endl;
    }
};

int main()
 {
    Calculate c;

    cout << "Enter first complex number:\n";
    c.getData();

    cout << "Enter second complex number:\n";
    c.getSecondComplex();

    cout << "\nResults:\n";
    c.add();
    c.subtract();
    c.multiply();

    return 0;
}
