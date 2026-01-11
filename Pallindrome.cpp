#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long int ans = 0;
        int y = x;

        if (x < 0)
            return false;

        while (x > 0) {
            int temp = x % 10;
            ans = (ans * 10) + temp;
            x /= 10;
        }
        return ans == y;
    }
};

int main() {
    Solution s;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (s.isPalindrome(num)) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is not a Palindrome number." << endl;
    }

    return 0;
}
