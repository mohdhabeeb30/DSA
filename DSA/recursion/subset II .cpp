class Solution {
public:
    void subset(vector<int>& nums, vector<int> &temp, vector<vector<int>> &ans, int index){
        
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }

        // ❌ LEFT → skip ALL duplicates
        int next = index + 1;
        while(next < nums.size() && nums[next] == nums[index]){
            next++;
        }
        subset(nums, temp, ans, next);

        // ✅ RIGHT → take
        temp.push_back(nums[index]);
        subset(nums, temp, ans, index + 1);
        temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;

        subset(nums, temp, ans, 0);
        return ans;
    }
};