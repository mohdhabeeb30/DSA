class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int &a :asteroids){
            // collision kab hoga 
            while(!st.empty() && a<0 && st.top()>0){
                int sum=a+st.top();
                if(sum<0){
                    st.pop(); // a+top=-ve means stcak wala chota wo exploid hoga 
                }
                else if(sum>0){
                    a=0;
                }
                else{
                    st.pop();
                    a=0;
                }
            }
            if(a!=0){
                st.push(a);
            }
            
        }
        int remaining =st.size();
        vector<int>result(remaining);
        for(int i=remaining-1;i>=0;i--){
            result[i]=st.top();
            st.pop();
        }
        return result;
        
    }
};
