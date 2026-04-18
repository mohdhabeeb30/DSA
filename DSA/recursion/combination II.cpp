class Solution {
public:
    void solve(vector<int>& nums, int target, int start, 
               vector<int>& temp, vector<vector<int>>& ans) {
        
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            if(nums[i] > target) break;

            temp.push_back(nums[i]); // ho skta hai koi element ho nums[i] akele hi bada ho target se toh hume break kr dena hai whi wrna nhi toh TLE aayega kukyi akle hi bada hai toh add honge toh aur bada hoga

            solve(nums, target - nums[i], i + 1, temp, ans);

            temp.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums, target, 0, temp, ans);
        return ans;
    }
};