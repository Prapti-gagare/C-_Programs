#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
    long long *fib;

public:
    Fibonacci(int size) {
        this->n = size;
        this->fib = new long long[n];
    }

    void generate() {
        if(this->n >= 1)
            this->fib[0] = 0;

        if(this->n >= 2)
            this->fib[1] = 1;

        for(int i = 2; i < this->n; i++) {
            this->fib[i] = this->fib[i - 1] + this->fib[i - 2];
        }
    }
    void display() {
        cout << "Fibonacci series: ";
        for(int i = 0; i < this->n; i++) {
            cout << this->fib[i] << " ";
        }
        cout << endl;
    }
    void nthTerm() {
        cout << "Nth Fibonacci number = "
             << this->fib[this->n - 1] << endl;
    }

    ~Fibonacci() {
        delete[] this->fib;
    }
};

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    Fibonacci f(n);

    f.generate();
    f.display();
    f.nthTerm();

    return 0;
}