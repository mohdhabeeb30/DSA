class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int start=0;
        int end =0;
        int maxlen=INT_MIN;
        int n=nums.size();
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]]>k){
                count[nums[start]]--;
                start++;
            }
            maxlen=max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};