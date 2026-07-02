class Solution {
public:
     int operation(int a,int b,string token){
        if(token=="+"){
            return a+b;
        }
        if(token=="-"){
            return b-a;
        }
        if(token=="*"){
            return a*b;
        }
        if(token=="/"){
            return b/a;
        }
        return 0;
     }

    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string &token :tokens){
            if(token=="+" || token=="-" || token=="/" || token=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=operation(a,b,token);
                st.push(result);
            }
            else{
                st.push(stoi(token));// ye stoi "50"kochange krke numder 50 dega nhi "50"+"50"="5050" ho jata ab 100 hoga
            }
        }
        return st.top();
        
    }
};