#include <iostream>
#include <vector>

using namespace std;
class LinearSearch
 {
private:
    vector<int> data;

public:
    LinearSearch(const vector<int>& arr) : data(arr) {}

    int search(int key) const 
    {
        for (size_t i = 0; i < data.size(); ++i) 
        {
            if (data[i] == key) {
                return static_cast<int>(i); 
            }
        }
        return -1; 
    }

    void display() const {
        cout << "Array elements: ";
        for (int val : data) cout << val << " ";
        cout << endl;
    }
};

int main() {
    vector<int> arr = {10, 23, 45, 70, 11, 15};

    LinearSearch ls(arr);

    ls.display();

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = ls.search(key);
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}