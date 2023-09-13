#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int st=0,ed=s.size();

        while(st!=ed){
            for(int i=0;i<wordDict.size();i++){
                
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> vec = {9,1,1,9,1,1,9};
    string s = "";
    vector<string> wordDict;
    cout << solution.wordBreak(s,wordDict) << endl;
    return 0;
}
