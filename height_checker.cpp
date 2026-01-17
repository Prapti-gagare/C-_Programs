#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& h)
     {
        int sz = h.size();
        vector<int> e(h);              
        sort(e.begin(), e.end());      

        int cnt = 0;
        for (int i = 0; i < sz; i++) {
            if (h[i] != e[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> h(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int result = s.heightChecker(h);
    cout << "Number of students not in correct position: " << result << endl;

    return 0;
}
