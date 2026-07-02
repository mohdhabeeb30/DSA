class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            int curr_val=nums[i%n];
            while(!st.empty() && st.top()<=curr_val){
                st.pop();
            }
            if(i<n){
                if(!st.empty()){
                    result[i]=st.top();
                }
            }
            st.push(curr_val);
        }
        return result;
    }
};