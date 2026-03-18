class Solution {
public:
    
    // Function: count subarrays with at most k distinct elements
    int atMostK(vector<int>& nums, int k){
        
        int n = nums.size();
        unordered_map<int,int> m; // element -> frequency
        
        int start = 0;
        int count = 0; // total valid subarrays
        
        for(int end = 0; end < n; end++){
            
            // 👉 Step 1: add current element into window
            m[nums[end]]++;
            
            // 👉 Step 2: agar distinct elements k se zyada ho gaye
            // to window shrink karo (left se)
            while(m.size() > k){
                m[nums[start]]--;      // frequency kam karo
                
                // agar freq 0 ho gayi → remove from map
                if(m[nums[start]] == 0){
                    m.erase(nums[start]);
                }
                start++; // window chhota karo
            }
            
            // 👉 Step 3: count valid subarrays
            // current window: [start ... end]
            // total subarrays ending at 'end' = (end - start + 1)
            count += (end - start + 1);
        }
        
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        // 👉 EXACTLY K = AtMost(K) - AtMost(K-1)
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};