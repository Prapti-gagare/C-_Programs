#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int f = 1, n = 1;
    while (f <= INT_MAX / n){
        f *= n;
        n++;
    }
    cout << "int : maximum n = " << n-1 << " and value = " << f << endl;
    return 0;
}
