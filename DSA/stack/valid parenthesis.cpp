class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==('(')){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                   return 0;
                }
                else{
                    st.pop();
                }
            }
        }
       return st.empty(); 
    }
};