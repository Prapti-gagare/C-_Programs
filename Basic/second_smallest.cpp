#include <iostream>
#include <climits>
using namespace std;

int main()
 {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Second smallest element does not exist" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
        cout << "Second smallest element does not exist" << endl;
    else
        cout << "Second smallest element: " << secondSmallest << endl;

    return 0;
}
