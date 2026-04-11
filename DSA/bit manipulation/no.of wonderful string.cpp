class Solution {
public:
    long long wonderfulSubstrings(string word) {
        typedef long long ll;
        unordered_map<ll, ll> mp;
        mp[0] = 1; // Shuruat mein status 000 (even) hota hai
        
        ll cum_xor = 0;
        ll result = 0; // Wonderful substrings zyada ho sakti hain, isliye long long
        
        for(char &ch : word) {
            // 1. Current char ki bit nikalo (a=0, b=1, c=2...)
            int shift = ch - 'a'; 
            
            // 2. cum_xor update karo (toggle bit)
            cum_xor ^= (1LL << shift); // Sahi tarika: 1 ko shift karo
            
            // 3. EVEN CASE: Check karo same mask kitni baar aaya
            result += mp[cum_xor]; 
            
            // 4. ODD CASE: Ek-ek karke 'a' se 'j' tak flip karke check karo
            for(int i = 0; i < 10; i++) {
                ll check_xor = cum_xor ^ (1LL << i); // Ek bit flip ki
                result += mp[check_xor]; // Agar ye mask mila, toh 1-odd case hai
            }
            
            // 5. Current mask ko diary (map) mein daalo
            mp[cum_xor]++;
        }
        
        return result;
    }
};
