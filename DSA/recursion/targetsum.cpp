class Solution {
public:
    int solve(vector<int>& nums, int index, int sum, int target) {
        
        if (index == nums.size()) {
            if (sum == target) return 1;
            else return 0;
        }

        int plus = solve(nums, index + 1, sum + nums[index], target);
        int minus = solve(nums, index + 1, sum - nums[index], target);

        return plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        
        int index = 0;
        int sum = 0;

        int result = solve(nums, index, sum, target);

        return result;
    }
};