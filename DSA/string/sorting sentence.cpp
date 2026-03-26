class Solution {
public:
    string sortSentence(string s) {
        string temp;
        int count=0;
        int index=0;
        vector<string> ans(10);
        while(index<s.size()){
            if(s[index]== ' '){
                int pos=temp.back() -'0';
               temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
            }
            else{
                temp+=s[index];
               
            }
            index++;

        }
        if(s[index]!=' '){
                int pos=temp.back()-'0';
               temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
        }

        for(int i=1;i<=count;i++){
            temp+=ans[i];
            temp+=' ';
        }
        temp.pop_back();
        return temp;
    }
};