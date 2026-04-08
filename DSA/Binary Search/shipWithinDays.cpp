class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int start=0;
        int end=0;
        for(int i=0;i<n;i++){
            if(weights[i]>start){
                start=weights[i];
            }
            end+=weights[i];
        }
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            int currentday=1;
            int currentload=0;
            for(int i=0;i<n;i++){
            if(currentload+weights[i]>mid){
                currentday++;
                currentload=weights[i];
            }
            else{
                currentload+=weights[i];
            }
            }
            if(currentday<=days){
                ans=mid;
                end=mid-1;

            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};