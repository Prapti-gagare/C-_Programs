#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int sz1 = w1.size();
        int sz2 = w2.size();
        string ans;
        int i = 0, j = 0;

        while (i < sz1 && j < sz2) {
            ans = ans + w1[i];
            ans = ans + w2[j];
            i++;
            j++;
        }

        if (i < sz1) {
            while (i < sz1) {
                ans += w1[i];
                i++;
            }
        } else {
            while (j < sz2) {
                ans += w2[j];
                j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    string w1, w2;

    cout << "Enter first word: ";
    cin >> w1;
    cout << "Enter second word: ";
    cin >> w2;

    string result = s.mergeAlternately(w1, w2);
    cout << "Merged string: " << result << endl;

    return 0;
}
