class Solution {
public:
       void permutation(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,vector<bool> &visited){
        if(nums.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                if(i>0 && nums[i]==nums[i-1] && visited[i-1]==0) continue;
                temp.push_back(nums[i]);
                visited[i]=1;
                permutation(nums,temp,ans,visited);
                visited[i]=0;
                temp.pop_back();

            }
        }
       }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
         vector<bool>visited(nums.size(),0);
        permutation(nums,temp,ans,visited);
        return ans;
        
    }
};