class Solution {
public:
    void solve(string &digits, int index, string temp, 
               vector<string> &ans, vector<string> &mapping) {

        // base case
        if(index == digits.size()){
            ans.push_back(temp);
            return;
        }

        int num = digits[index] - '0';
        string letters = mapping[num];

        for(char ch : letters){
            solve(digits, index + 1, temp + ch, ans, mapping);
        }
    }

    vector<string> letterCombinations(string digits) {
        
        if(digits.empty()) return {};

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;

        solve(digits, 0, "", ans, mapping);

        return ans;
    }
};