#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int largest = arr[n - 1];
    int i = n - 2;

    while(i >= 0 && arr[i] == largest)
        i--;

    if(i < 0)
        cout << "No second largest element exists" << endl;
    else
        cout << "Second largest element: " << arr[i] << endl;

    return 0;
}
