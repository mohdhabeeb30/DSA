class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        int maxelement = *max_element(nums.begin(), nums.end());

        int start = 0;
        long long count = 0;   // count of max element
        long long total = 0;  // count no of subarrays

        for(int end = 0; end < n; end++){
            
            if(nums[end] == maxelement){
                count++;
            }

            // shrink window
            while(count >= k){
                total += (n - end);
// agar 3 hua toh count kam krna padega nhi toh sirf start aage
                if(nums[start] == maxelement){
                    count--;
                }
                start++;
            }
        }

        return total;
    }
};