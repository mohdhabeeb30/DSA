class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;
        for (int i = s.size() - 1; i > 0; --i) {

            if ((s[i] - '0') + carry == 1) {
                steps += 2; // 1st add 1 then pop 2 operation
                carry = 1; 
            } else {
                
                steps += 1; // direct pop 

            }
        }
        return steps + carry;
    }
};
