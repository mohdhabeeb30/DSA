class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            
            int sum = numbers[left] + numbers[right];

            // agar sum chhota hai → left badhao
            if(sum < target){
                left++;
            }
            
            // agar sum bada hai → right ghatao
            else if(sum > target){
                right--;
            }
            
            
            else{
                
                return {left + 1, right + 1};
            }
        }

        return {};
    }
};