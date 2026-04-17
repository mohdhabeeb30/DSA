class Solution {
public:
       void permutation(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,vector<bool> &visited){
        if(nums.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                temp.push_back(nums[i]);
                visited[i]=1;
                permutation(nums,temp,ans,visited);
                visited[i]=0;
                temp.pop_back();

            }
        }
       }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
         vector<bool>visited(nums.size(),0);
        permutation(nums,temp,ans,visited);
        return ans;
        
    }
};