#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); 
    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    s.erase(5);

    cout << "After deletion: ";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}