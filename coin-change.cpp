#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        dp[0]=0;
        for(int this_amount=1;this_amount<=amount;this_amount++){
            for(int j=0;j<coins.size();j++){
                int coin = coins[j];
                if(coin>this_amount)continue;
                if(dp[this_amount-coin]==-1)continue;

                if(dp[this_amount]==-1||dp[this_amount-coin]+1<dp[this_amount]){
                    dp[this_amount] = dp[this_amount-coin]+1;
                }

            }
        }

        return dp[amount];

    }
};

int main() {
    Solution solution;
    vector<int> vec = {2};
    string s = "";
    vector<string> wordDict;
    int amount = 3;
    cout << solution.coinChange(vec,amount) << endl;
    return 0;
}
