#include <iostream>
using namespace std;

class NumberTheory 
{
private:
    int a, b;
    int gcdValue, lcmValue;
public:
    NumberTheory(int x, int y) {
        this->a = x;
        this->b = y;
        this->gcdValue = 0;
        this->lcmValue = 0;
    }
    void calculateGCD() {
        int x = this->a;
        int y = this->b;

        while(y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }

        this->gcdValue = x;
    }
    void calculateLCM() {
        this->calculateGCD();
        this->lcmValue = (this->a * this->b) / this->gcdValue;
    }
    void display() {
        cout << "GCD = " << this->gcdValue << endl;
        cout << "LCM = " << this->lcmValue << endl;
    }
};

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    NumberTheory obj(x, y);

    obj.calculateLCM();   
    obj.display();

    return 0;
}