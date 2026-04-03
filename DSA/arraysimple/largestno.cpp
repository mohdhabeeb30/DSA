class Solution {
public:
    static bool cmp(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        // int → string convert
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        // custom sort
        sort(arr.begin(), arr.end(), cmp);

        // result build
        string result = "";
        for (string s : arr) {
            result += s;
        }

        // edge case: "0000"
        if (result[0] == '0') return "0";

        return result;
    }
};