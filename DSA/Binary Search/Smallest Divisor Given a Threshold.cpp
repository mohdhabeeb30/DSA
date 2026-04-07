class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;// smallest divisor jiise sum max hoga 
        int end=0; 
        // max element which divide the every element in aaray and sum is very low 
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>end){
            end=nums[i];
        }
        }
        int ans=end;
      
        while(start<=end){
           
            int mid=start+(end-start)/2;
            long long currentsum=0;
            for(int i=0;i<n;i++){
                currentsum+=(nums[i]+mid-1)/mid;
            }
            if(currentsum<=threshold){
               ans=mid;
                end=mid-1;

            }
            else{
                start=mid+1;
            }

        }
        return ans;
        
    }
};