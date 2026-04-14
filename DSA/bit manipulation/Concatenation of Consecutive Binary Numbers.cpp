class Solution {
public:
    int concatenatedBinary(int n) {
        long result = 0;
        int digit = 0;
        int M = 1e9 + 7;

        for (int num = 1; num <= n; num++) {
            // Agar num Power of 2 hai (jaise 1, 2, 4, 8...)
            // toh binary representation mein ek naya digit add ho jata hai
            if ((num & (num - 1)) == 0) {
                digit++;
            }
            
            // 1. Pehle result ko left shift karo (jagah banao)
            // 2. Usme naya number 'num' add karo (OR ya + dono chalenge)
            // 3. Modulo lagao overflow se bachne ke liye
            result = ((result << digit) + num) % M;
        }

        return (int)result;
    }
};
