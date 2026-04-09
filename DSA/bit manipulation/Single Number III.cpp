class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Check: kya ye element apne padosi se alag hai?
            if (i < n - 1 && (nums[i] ^ nums[i+1]) == 0) {
                // Agar SAME hain, toh pair hai. Agle wale ko skip karo.
                i++; // plus one krega phir for loop plus one i=2 se strat hogi pair by pair check 
            } else {
                // Agar ALAG hai, toh ye single number hai.
                ans.push_back(nums[i]); 
            }
        }
        return ans;
    }
};
