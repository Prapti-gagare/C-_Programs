#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
 {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans[0] = nums[i];
                break;
            }
        }
        int sum = n * (n + 1) / 2;
        int sum_c = 0;
        for (int i = 0; i < n; i++) {
            sum_c += nums[i];
        }

        ans[1] = sum - (sum_c - ans[0]);
        return ans;
    }
};

int main() 
{
    Solution s;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (1 to n with one duplicate and one missing): ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }

    vector<int> result = s.findErrorNums(nums);

    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}
