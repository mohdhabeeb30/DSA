class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

     
        for(char ch : s){
            mp[ch]++;
        }

        // Step 2: Store in vector
        vector<pair<char, int>> vec(mp.begin(), mp.end());

        // Step 3: Sort based on frequency
        sort(vec.begin(), vec.end(), cmp);
 
       
        string ans = "";
        for(auto it : vec){
            ans += string(it.second, it.first); // repeat char
        }

        return ans;
    }

    // Comparator function (NO lambda)
    static bool cmp(pair<char,int> a, pair<char,int> b){
        return a.second > b.second; // descending
    }
};