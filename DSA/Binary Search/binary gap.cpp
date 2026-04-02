class Solution {
public:
    int binaryGap(int n) {
        int prev = -1;
        int curr = 0;
        int maxGap = 0;

        while (n > 0) {
            if (n & 1) {  // last bit check
                if (prev != -1) {
                    maxGap = max(maxGap, curr - prev);
                }
                prev = curr;
            }
            curr++;
            n = n >> 1;   // right shift
        }

        return maxGap;
    }
};