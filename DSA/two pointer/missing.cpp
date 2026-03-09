class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size();
        long long sum=0;
        for(long long i=0;i<n;i++){
           sum += arr[i];
        }
        long long total= (n+1)*(n+2)/2;
        return total-sum;
    }
};