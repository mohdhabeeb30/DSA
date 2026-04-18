class Solution {
public:
      void findsubsets(vector<int>& nums,vector<int> &temp, vector<vector<int>> &ans,int index){
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        // left case not include
        findsubsets(nums,temp,ans,index+1);
        // right subsets
        temp.push_back(nums[index]);
        findsubsets(nums,temp,ans,index+1);
        temp.pop_back();
      }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>> ans;
        findsubsets(nums,temp,ans,0);
        return ans;
    }
};