#include <iostream>
#include <climits>
using namespace std;

int main()
{
    unsigned int f = 1;
    int n = 1;
    while (f <= UINT_MAX / n){
        f *= n;
        n++;
    }
    cout << "unsigned int : maximum n = " << n-1 << " and value = " << f << endl;
    return 0;
}
