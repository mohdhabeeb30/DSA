class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        // inserting all the elements of both the arrays in a set to avoid duplicates
        set<int>st;
        for(int i=0;i<n1;i++){
        st.insert(a[i]);
        }
        for(int i=0;i<n2;i++){
        st.insert(b[i]);
        }
        // pushing all the elements of the set in a vector to return
        vector<int>temp;
        for(auto it :st){
            temp.push_back(it);
        }
        return temp;
    }
};