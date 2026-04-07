class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long start=0;
        long long end=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>start){
                start=nums[i];
            }
            end+=nums[i];
        }
        long long ans=end;
        while(start<=end){
            long long mid=start+(end-start)/2;
            int count=1;  // count number of subarray 
            int currentsum=0;  // currnet sum of subarray
            for(int i=0;i<n;i++){
            if(currentsum+nums[i]>mid){
            count++; 
            currentsum=nums[i];
        }
        else{
            currentsum+=nums[i];
        }
        }
        // check agar sum mid se kam hai ya nhi toh asume kr lenege abhi whi answer aur left jayenge taki usse chota answer mil sake
        if(count<=k){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        }
        return ans;
    }
};