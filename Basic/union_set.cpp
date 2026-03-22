#include <iostream>
#include <set>
using namespace std;

int main()
 {
    set<int> a = {1, 2, 3};
    set<int> b = {3, 4, 5};
    set<int> result;
    result.insert(a.begin(), a.end());
    result.insert(b.begin(), b.end());

    cout << "Union: ";
    for (int x : result) 
    {
        cout << x << " ";
    }

    return 0;
}