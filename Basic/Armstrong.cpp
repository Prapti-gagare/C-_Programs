#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, temp, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    int digits = 0;
    int t = n;
    while (t != 0) 
    {
        t /= 10;
        digits++;
    }
    while (temp != 0) 
    {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}
