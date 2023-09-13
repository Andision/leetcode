#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1);
        int ret = 1;
        dp[0] = 1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]&&dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
            if(dp[i]>ret)ret=dp[i];
        }
        return ret;
    }
};

int main() {
    Solution solution;
    vector<int> vec = {1,0,0,0};
    string s = "";
    vector<string> wordDict;
    cout << solution.lengthOfLIS(vec) << endl;
    return 0;
}
