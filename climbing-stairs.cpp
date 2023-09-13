#include <cstdio>
#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int dp[50];
        int count = 0;
        
        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};

int main() {
    Solution s;
    cout << s.climbStairs(2) << endl;
    return 0;
}