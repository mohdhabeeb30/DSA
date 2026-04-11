class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int totalXOR = 0;
        
        for(int i = 0; i < n; i++) {
            totalXOR ^= nums[i];
        }
        
        int count = 0;
        int diff = totalXOR ^ k; 
        
        for(int i = 0; i < 32; i++) {
            // Check karein agar i-th bit '1' hai
            if (((diff >> i) & 1) == 1) { 
                count++; 
            }
        }
        
        return count;
    }
}; 
// Approach 2: Using built-in function to count set bits
// class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int totalXOR = 0;
        
        for(int i = 0; i < n; i++) {
            totalXOR ^= nums[i];
        }//
        int diff = totalXOR ^ k;
        return __builtin_popcount(diff); // Count the number of set bits in diff