#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) 
        {
            throw b;  
        }
        cout << "Result = " << a / b << endl;
    }
    catch (int x)
     {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
