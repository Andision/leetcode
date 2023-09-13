#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int digits[5], currentDigit = 1000;
        string ret = "";

        for (int i = 3; i >= 0; i--) {
            digits[i] = num / currentDigit;
            num %= currentDigit;
            currentDigit /= 10;
            cout << i << ' ' << digits[i] << endl;
        }

        while (digits[3]--) {
            ret += "M";
        }

        if (digits[2] == 4) {
            ret += "CD";

        } else if (digits[2] == 9) {
            ret += "CM";
        } else {
            if (digits[2] >= 5) {
                ret += "D";
                digits[2] -= 5;
            }
            while (digits[2]--) {
                ret += "C";
            }
        }

        if (digits[1] == 4) {
            ret += "XL";

        } else if (digits[1] == 9) {
            ret += "XC";
        } else {
            if (digits[1] >= 5) {
                ret += "L";
                digits[1] -= 5;
            }
            while (digits[1]--) {
                ret += "X";
            }
        }

        if (digits[0] == 4) {
            ret += "IV";

        } else if (digits[0] == 9) {
            ret += "IX";
        } else {
            if (digits[0] >= 5) {
                ret += "V";
                digits[0] -= 5;
            }
            while (digits[0]--) {
                ret += "I";
            }
        }

        return ret;
    }
};

int main() {
    Solution solution;
    vector<int> vec = {9, 1, 1, 9, 1, 1, 9};
    string s = "";
    vector<string> wordDict;
    int num = 1994;
    cout << solution.intToRoman(num) << endl;
    return 0;
}
