class Solution {
public:
    int solve(vector<int>& nums, int i, int j){
        if(i == j) return nums[i];

        // pick left
        int pickLeft = nums[i] - solve(nums, i+1, j);

        // pick right
        int pickRight = nums[j] - solve(nums, i, j-1);

        // best choice
        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1) >= 0;
    }
};