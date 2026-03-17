class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        // loop on set (not nums)
        for(auto num : s){
            
            // start of sequence
            if(s.count(num - 1) == 0){
                
                int current = num;
                int count = 1;

                while(s.count(current + 1)){
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};