#include <bits/stdc++.h>
using namespace std;

bool isDiagonallyDominant(vector<vector<double>> &A) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            if (i != j)
                sum += abs(A[i][j]);
        }
        if (abs(A[i][i]) < sum)
            return false;
    }
    return true;
}

// Backtracking function to find valid permutation
bool makeDDUtil(vector<vector<double>> &A, vector<vector<double>> &result,
                vector<bool> &visited, int col) {
    int n = A.size();

    if (col == n)
        return true;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            double sum = 0;
            for (int j = 0; j < n; j++) {
                if (j != col)
                    sum += abs(A[i][j]);
            }

            // Check diagonal dominance condition for this row
            if (abs(A[i][col]) >= sum) {
                visited[i] = true;
                result[col] = A[i];

                if (makeDDUtil(A, result, visited, col + 1))
                    return true;

                visited[i] = false; // backtrack
            }
        }
    }
    return false;
}

bool makeDiagonallyDominant(vector<vector<double>> &A) {
    int n = A.size();
    vector<vector<double>> result(n, vector<double>(n));
    vector<bool> visited(n, false);

    if (!makeDDUtil(A, result, visited, 0))
        return false;

    A = result;
    return true;
}

void printMatrix(const vector<vector<double>> &A) {
    for (auto &row : A) {
        for (auto val : row)
            cout << setw(10) << val << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter dimension n: ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n));

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "\nOriginal Matrix:\n";
    printMatrix(A);

    if (makeDiagonallyDominant(A)) {
        cout << "\nDiagonally Dominant Matrix:\n";
        printMatrix(A);
    } else {
        cout << "\nCannot make the matrix diagonally dominant by row swapping.\n";
    }

    return 0;
}