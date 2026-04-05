class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // make mid even for every odd index at second so make mid even so that we can cpmare with mid+1 which is odd
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                start = mid + 2;  
            } else {
                end = mid;        
            }
        }

        return nums[start];
    }
};