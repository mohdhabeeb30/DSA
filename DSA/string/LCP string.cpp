 class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        // [" flight","flow","flower" ]
        string first=strs[0]; // point = flight
        string last=strs[strs.size()-1]; // point= last 
        string ans="";
        for(int i=0;i<first.size();i++){
            if(first[i]!=last[i]){
                break;
            }
            ans+=first[i];
        }
        return ans;
    }
}; 