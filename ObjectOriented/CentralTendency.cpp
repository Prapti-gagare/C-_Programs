#include <iostream>
#include <cmath>
using namespace std;

class Statistics {
private:
    int n;
    double arr[100];
    double mean, variance, sd;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> this->n;

        cout << "Enter elements:\n";
        for(int i = 0; i < this->n; i++) {
            cin >> this->arr[i];
        }
    }

    void calculateMean() {
        double sum = 0;
        for(int i = 0; i < this->n; i++) {
            sum += this->arr[i];
        }
        this->mean = sum / this->n;
    }

    void calculateVariance() {
        double temp = 0;
        for(int i = 0; i < this->n; i++) {
            temp += pow(this->arr[i] - this->mean, 2);
        }
        this->variance = temp / this->n;
    }

    void calculateSD() {
        this->sd = sqrt(this->variance);
    }

    void display() {
        cout << "Mean = " << this->mean << endl;
        cout << "Variance = " << this->variance << endl;
        cout << "Standard Deviation = " << this->sd << endl;
    }
};

int main() {
    Statistics s;

    s.input();
    s.calculateMean();
    s.calculateVariance();
    s.calculateSD();
    s.display();

    return 0;
}
