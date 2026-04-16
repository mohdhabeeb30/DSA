class Solution {
public:
    int M = 1e9 + 7;

    long long power(long long x, long long n) {
        long long result = 1;
        
        while (n > 0) {
            if (n % 2 == 1) {
                result = (result * x) % M;
            }
            x = (x * x) % M;
            n = n / 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2; // Positions: 0, 2, 4... (5 choices each)
        long long odd = n / 2;       // Positions: 1, 3, 5... (4 choices each)
        
        long long evenpart = power(5, even);
        long long oddpart = power(4, odd); 
        
        return (evenpart * oddpart) % M;
    }
};
