class Solution {
public:
    bool isPowerOfFour(int n) {
       return n > 0 && (n & (long long)n - 1) == 0 && (n%3==1);
    }
};