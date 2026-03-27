class Solution {
public:
    int findSubString(string& str) {
        vector<int> count(256, 0);

        int first = 0, second = 0;
        int diff = 0;

        // step 1: count total unique chars
        for(int i = 0; i < str.size(); i++){
            if(count[str[i]] == 0){
                diff++;
                count[str[i]] = 1;
            }
        }

        // reset count
        for(int i = 0; i < 256; i++){
            count[i] = 0;
        }

        int len = INT_MAX;
        int curr = 0; // current unique count in window

        // step 2: sliding window
        while(second < str.size()){
            if(count[str[second]] == 0){
                curr++;
            }
            count[str[second]]++;
            second++;

            // jab sab characters mil jaye
            while(curr == diff){
                len = min(len, second - first);

                count[str[first]]--;
                if(count[str[first]] == 0){
                    curr--;
                }
                first++;
            }
        }

        return len;
    }
};