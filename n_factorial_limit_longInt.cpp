#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long int f = 1;
    int n = 1;
    while (f <= LONG_MAX / n){
        f *= n;
        n++;
    }
    cout << "long int : maximum n = " << n-1 << " and value = " << f << endl;
    return 0;
}
