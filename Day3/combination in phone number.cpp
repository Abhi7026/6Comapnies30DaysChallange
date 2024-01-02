#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 void backtrack(vector<string>& result, const vector<string>& mapping, string& combination, const string& digits, int index) {
        if (index == digits.size()) {
            result.push_back(combination);
        } else {
            string letters = mapping[digits[index] - '0'];
            for (char letter : letters) {
                combination[index] = letter;
                backtrack(result, mapping, combination, digits, index + 1);
            }
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) {
            return ans;
        }
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string combination(digits.size(), ' ');
        backtrack(ans, mapping, combination, digits, 0);
        return ans;
        //discuss time and space complexity;
    }
    
   
};
