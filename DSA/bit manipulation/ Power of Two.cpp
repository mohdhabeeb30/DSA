class Solution {
public:
    bool isPowerOfTwo(int n) {
        // A power of two must be positive and have exactly one set bit
        // If n is a power of two, the result will be 0.
        return n > 0 && (n & (long long)n - 1) == 0;
    }
};