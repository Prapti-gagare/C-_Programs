#include <iostream>
using namespace std;

int main()
 {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result = " << a + b << endl;
            break;

        case '-':
            cout << "Result = " << a - b << endl;
            break;

        case '*':
            cout << "Result = " << a * b << endl;
            break;

        case '/':
            if(b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division by zero is not allowed" << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
