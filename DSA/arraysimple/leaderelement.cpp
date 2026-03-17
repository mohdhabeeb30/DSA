class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
//  approach is to traverse the array from right to left and keep track of the maximum element seen so far.
        int maxRight = INT_MIN;
// if the current element is greater than the maximum element seen so far, it is a leader and we add it to the answer vector.
        for(int i = n - 1; i >= 0; i--) {
            if(nums[i] > maxRight) {
                ans.push_back(nums[i]);
                maxRight = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};