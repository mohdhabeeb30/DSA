class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto lamda=[&](int &a ,int &b){
            int count_a=__builtin_popcount(a); // count 1s or use while nums & 1 for count 
            int count_b=__builtin_popcount(b);
            if(count_a==count_b){
                return a<b;
            }
            return count_a<count_b;
        };
    
        sort(arr.begin(),arr.end(),lamda);
         return arr;
    }
};