class Solution {
public:

    void lpsfind(string &s, vector<int> &lps) {
        int prefix = 0;
        int suffix = 1;

        while(suffix < s.size()){
            if(s[prefix] == s[suffix]){
                lps[suffix] = prefix + 1;
                prefix++;
                suffix++;
            }
            else{
                if(prefix == 0){
                    lps[suffix] = 0;
                    suffix++;
                }
                else{
                    prefix = lps[prefix - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        vector<int> lps(needle.size(), 0);
        lpsfind(needle, lps);

        int first = 0;
        int second = 0;

        while(first < haystack.size()){
            if(haystack[first] == needle[second]){
                first++;
                second++;
            }
            else{
                if(second == 0){
                    first++;
                }
                else{
                    second = lps[second - 1];
                }
            }

            if(second == needle.size()){
                return first - second;
            }
        }

        return -1;
    }
};