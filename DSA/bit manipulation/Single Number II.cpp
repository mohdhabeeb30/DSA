class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int result=0;
      // zero se saare bit tak jaane ke liye
      for(int k=0;k<=31;k++){
        int temp=(1<<k); // left shift
        int countzero=0;
        int countone=0;
        // for count no of zero and ones
        for(int &num :nums){
            if((num & temp)==0){
                countzero++;
            }
            else{
                countone++;
            }
        }
        if(countone%3==1){
            result=(result | temp);
        }
      }
        
        return result;
    }
};