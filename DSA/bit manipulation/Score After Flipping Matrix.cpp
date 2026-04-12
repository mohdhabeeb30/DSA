class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Step 1: Har Row ka pehla column 1 hona chahiye
        for(int i = 0; i < m; i++) {
            if(grid[i][0] == 0) { // Agar pehla element 0 hai
                // Poori row ko flip kar do
                for(int j = 0; j < n; j++) {
                    grid[i][j] = 1 - grid[i][j]; // 0 ban jayega 1, aur 1 ban jayega 0
                }
            }
        }

        // Step 2: Har Column (1st ke baad) mein check karo 0 zyada hain ya 1
        for(int j = 1; j < n; j++) {
            int countZero = 0;
            for(int i = 0; i < m; i++) {
                if(grid[i][j] == 0) countZero++;
            }

            // Agar 0 zyada hain, toh us column ko flip kar do
            if(countZero > (m / 2)) {
                for(int i = 0; i < m; i++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        // Step 3: Final Score calculate karo (Binary to Decimal)
        int score = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                // grid[i][j] ki value ko uski position (2^(n-1-j)) se multiply karo
                if(grid[i][j] == 1) {
                    score += (1 << (n - 1 - j));
                }
            }
        }

        return score;
    }
};
