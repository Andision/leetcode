#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        dp.push_back({triangle[0][0]});
        for(int level=1;level<triangle.size();level++){
            vector<int> sdp;
            sdp.push_back(triangle[level][0]+dp[level-1][0]);
            for(int pos=1;pos<level;pos++){
                sdp.push_back((dp[level-1][pos]<dp[level-1][pos-1]?dp[level-1][pos]:dp[level-1][pos-1])+triangle[level][pos]);
            }
            sdp.push_back(dp[level-1][level-1]+triangle[level][level]);
            dp.push_back(sdp);
        }

        int ret = dp[dp.size()-1][0];
        for(int i=0;i<triangle.size();i++){
            if(dp[dp.size()-1][i]<ret)ret = dp[dp.size()-1][i];
        }

        for(int i=0;i<triangle.size();i++){
            for(int j=0;j<=i;j++)
                cout<< dp[i][j]<<' ';
            cout<<endl;
        }

        return ret;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> vec = {{{2},{3,4},{6,5,7},{4,1,8,3}}};
    string s = "";
    vector<string> wordDict;
    cout << solution.minimumTotal(vec) << endl;
    return 0;
}
