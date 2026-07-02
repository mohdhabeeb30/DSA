class Solution {
public:
// to avoid duplictae use >= in one while condtion of any left or right
    vector<int> getleft(vector<int>&arr,int n){
        vector<int>result(n);
        stack<int>st;
        // left wale nikal rhe hain
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                result[i]=-1;
            }
            else{
                result[i]=st.top();
            }
            st.push(i);
        }
        return result;
    }
    vector<int> getright(vector<int>&arr,int n){
        vector<int>result(n);
        stack<int>st;
        // right wale nikal rhe hain
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                result[i]=n;
            }
            else{
                result[i]=st.top();
            }
            st.push(i);
        }
        return result;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>RSL=getleft(arr,n);
        vector<int>NSL=getright(arr,n);
        long long sum=0;
        int M=1e9+7;
        for(int i=0;i<n;i++){
            long long l=i-RSL[i];
            long long r=NSL[i]-i;
            long long totalway=l*r;
            long long totalsum=(arr[i]*totalway)%M;
            sum=(sum+totalsum)%M;

        }
        return sum;
        
    }
};