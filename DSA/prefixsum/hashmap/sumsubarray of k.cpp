class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;  // prefix sum = 0 occurs once
        int prefixsum = 0;
        int total = 0;
        
        for (int i = 0; i < nums.size(); i++) {
           prefixsum += nums[i]; // accumulate prefix sum
            
            if (mp.count(prefixsum - k)) {
                total += mp[prefixsum - k];
            }
            
            mp[prefixsum]++; // record current prefix sum
        }
        
        return total;
    }
};
