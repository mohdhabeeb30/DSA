class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int prefixsum=0;
       int rem;
       int total=0; 
       for(int i=0;i<nums.size();i++){
        prefixsum+=nums[i];
        rem= prefixsum%k;
        if(rem<0){
            rem= k+rem;
        }
        if(mp.count(rem)){
            total+=mp[rem];
            mp[rem]++;
        }
        else{
            mp[rem]=1;
        }

       } 
       return total;
    }
};