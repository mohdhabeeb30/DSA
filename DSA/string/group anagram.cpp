class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(char ch:strs){
            string temp=ch;
            sort(temp.begin(),tenp.end());
            mp[temp].push_back(ch);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};