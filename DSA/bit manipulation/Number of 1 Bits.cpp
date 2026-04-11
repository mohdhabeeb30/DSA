class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
        n=n &(n-1);
            count++;
    }
    return count;
    }
};
// int ans =__buitin_popcount(n); // inbuilt function to count number of 1 bits in n
// 
// approach 3 using n>>1 and n&1 then count ++