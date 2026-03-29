class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>m1(256,-1);
        vector<int>m2(256,-1);

        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];
            if(m1[c1]!=m2[c2])return false; // occurence bta rha hai 
            m1[c1]=i;  // agar pattern match hua like 0 1 1
            m2[c2]=i;  // like 0 1 1 toh isomorphic
        }
        return true;
    }
};