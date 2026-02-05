#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int ans_i = 0;
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[ans_i] = nums[i];
            ans[ans_i + 1] = nums[i + n];
            ans_i += 2;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(2 * n);
    cout << "Enter " << 2 * n << " elements: ";
    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    vector<int> result = s.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
