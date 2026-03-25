x// User function template for C++
class Solution {
  public:

    int isPanagram(string S) {
        // Your code goes here
        vector<bool> alpha(26,0);
        for(int i=0;i<S.size();i++){
            if(isalpha(S[i])){
          char ch= tolower(S[i]);
            int index=ch-'a';
            alpha[index]=1;
            }
        }
        for(int i=0;i<26;i++){
            if(alpha[i]==0)
            return 0;
        }
        return 1;
    }
};