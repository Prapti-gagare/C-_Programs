#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P, R, T, A, CI;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Rate of Interest (R in %): ";
    cin >> R;

    cout << "Enter Time (T in years): ";
    cin >> T;
    A = P * pow((1 + R / 100), T);
    CI = A - P;

    cout << "Compound Amount = " << A << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}
