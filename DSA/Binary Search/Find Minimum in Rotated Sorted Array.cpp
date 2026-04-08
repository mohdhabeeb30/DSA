class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        // if wali condition  bta rhi hai array pahle sorted hai toh pahla element hi min hoga
        if(nums[start]<=nums[end]){
            return nums[start];
        }
        ////// loop infinite loop me chala ayega agar = lga diya hota osliye only < kukyi end=mid
        while(start<end){
            int mid=start+(end-start)/2;
            // left rotated hai kukyki shruaat me bade hai to min right me hoga 
            if(nums[mid]>nums[end]){
                start=mid+1;

            }
            else{
                end=mid;
                

            }
           
        }
        return nums[start];
    }
};