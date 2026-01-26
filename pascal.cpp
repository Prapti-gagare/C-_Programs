#include <iostream>
#include <vector>
using namespace std;

int main()
 {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> pascal(n);

    for(int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for(int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int s = 0; s < n - i - 1; s++)
            cout << " ";

        for(int j = 0; j <= i; j++)
            cout << pascal[i][j] << " ";

        cout << endl;
    }
    return 0;
}
