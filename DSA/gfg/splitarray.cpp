class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();
        int prefix=0;
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        for(int i=0;i<n-1;i++){
            prefix+=arr[i];
            int ans=totalsum-prefix;
            if(ans==prefix)
            return true;
        }
        return false;
    }
};
