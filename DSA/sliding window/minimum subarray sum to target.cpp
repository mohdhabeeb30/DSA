class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mintotal= INT_MAX;
        int start=0;
        int end=0;
        int sum=0;
        int n=nums.size();
        while(end <n ){
            sum+=nums[end];
            while(sum>=target){
               mintotal=min(mintotal,end-start+1);
                sum-=nums[start];
                start++;

            }
            end++;

        }
        return mintotal== INT_MAX ? 0 : mintotal;
        
    }
};