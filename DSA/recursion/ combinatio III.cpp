class Solution {
public:
    void solve(int k, int target, int start, vector<int>& temp, vector<vector<int>>& ans) {
        
       // base  case agar 
        if (k == 0 && target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i <= 9; i++) {

            temp.push_back(i);                    
           // taget -i ae kya hoga maan lo 1 aaya diff 6 ka abhi 
           // kam hota jayega sum and for i+1 maan lo pahli call 1 aa gya to next number 1 nhi hona chaiye isliye i+1 toh 2 ho gya
            solve(k - 1, target - i, i + 1, temp, ans); 

            temp.pop_back();                      
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(k, n, 1, temp, ans);
        return ans;
    }
};