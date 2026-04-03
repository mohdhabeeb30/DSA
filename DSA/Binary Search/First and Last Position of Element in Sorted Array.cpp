class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Lower Bound
        int start = 0, end = n - 1;
        int lb = n;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] >= target) {
                lb = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        // Check if target exists
        if (lb == n || nums[lb] != target) {
            return {-1, -1};
        }
        
        // Upper Bound
        start = 0, end = n - 1;
        int ub = n;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] > target) {
                ub = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return {lb, ub - 1};
    }
};