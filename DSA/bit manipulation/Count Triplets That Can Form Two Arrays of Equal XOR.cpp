class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            int current_xor = arr[i];
            for (int k = i + 1; k < n; ++k) {
                current_xor ^= arr[k]; // i se k tak XOR calculate karo
                
                if (current_xor == 0) {
                    // Agar XOR 0 hai, toh i aur k ke beech koi bhi 'j' chalega
                    // Total valid j's = (k - i)
                    count += (k - i);
                }
            }
        }
        
        return count;
    }
};
