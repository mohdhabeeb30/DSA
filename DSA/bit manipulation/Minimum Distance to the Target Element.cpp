class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int current_dis=0;
        int min_dis=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                current_dis=abs(i-start);
                if(current_dis<min_dis){
                min_dis=current_dis;
            }
            }
            
        }
        return min_dis;
    }
};