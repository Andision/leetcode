#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        int maxx = 0;
        vector<int> dp(nums.size() + 15, 0);
        for (int i = 5; i < nums.size() + 5; i++) {
            dp[i] = nums[i - 5] + dp[i - 2];
            if (nums[i - 5] + dp[i - 3] > dp[i]) {
                dp[i] = nums[i - 5] + dp[i - 3];
            }
            if (dp[i] > maxx) {
                maxx = dp[i];
            }
        }
        return maxx;
    }
};

int main() {
    Solution s;
    vector<int> vec = {9,1,1,9,1,1,9};
    cout << s.rob(vec) << endl;
    return 0;
}
