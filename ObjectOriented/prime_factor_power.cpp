#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int num = n;

    cout << n << " = ";

    int count = 0;
    while(n % 2 == 0) {
        count++;
        n /= 2;
    }
    if(count > 0) 
    {
        cout << "2^" << count;
        if(n > 1) cout << " * ";
    }

    for(int i = 3; i * i <= n; i += 2) {
        count = 0;
        while(n % i == 0) {
            count++;
            n /= i;
        }

        if(count > 0) {
            cout << i << "^" << count;
            if(n > 1) cout << " * ";
        }
    }

    if(n > 2) {
        cout << n << "^1";
    }

    return 0;
}