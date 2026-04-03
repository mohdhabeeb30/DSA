int lowerBound(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1;
    int ans = n;   // default (agar > target na mile)

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] >=target) {
            ans = mid;        // possible answer
            end = mid - 1;    // left mein aur chhota index dhundo
        } else {
            start = mid + 1;  // right side jao
        }
    }
    return ans;
}